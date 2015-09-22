        //
        //  main.cpp
        //  howManyKeys
        //
        //  Created by Emilio Gonzalez on 9/11/15.
        //  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
        //
        
        #include <iostream>
        #include <vector>
        #include <stdio.h>
        #include <algorithm>
        
        using namespace std;
        
        int main() {
            int c,result = 0;
            double x = 0.0;
            string ev,en,inner;
            char in[33];
            float l = 0.0;
            vector<string>input;
            vector<int>r;
            //Input de cuantas "Keys" nos darán despues
            scanf("%i",&c);
            l = c;
            //Input de Keys, acomodarlas de pequeño a grande y guardar en input
            for (int i = 0; i<c; i++) {
                scanf("%s",in);
                string inner(in);
                sort(inner.begin(), inner.end());
                input.push_back(inner);
            }
            for (int i = 0; i<input.size(); i++) {
                cout << input[i] << "\n";
            }
            //Evaluar los valores en input y despues buscar cuantos hay, guardar ese numero y despues remover
            //A todos los que contengan ese numero
            for (int j = 0; j<input.size(); j++) {
                ev = input[j];
                x = count(input.begin(), input.end(), ev);
                r.push_back(x);
                input.erase(remove(input.begin(), input.end(), ev), input.end());
            }
            //Si hay algo en r (El vector de resultados) haz la operacion que implica L += K-1
            if (r.size() > 0) {
                for (int i = 0; i<r.size(); i++) {
                    x = r[i]-1;
                    l = l-x;
                    result = l;
                }
                printf("%i",result);
            //No hay nada en r, el resultado es la cantidad l y despliega el resultado
            } else {
                result = l;
                printf("%i",result);
            }
        }
    
    /*
     Description
     
     Not so long ago a group of scientists from the Americas Centre for Messaging (ACM) came up with a new way to encode messages. The algorithm begins by generating a list of
     
     keys L
     
     which are later on used to encode different messages. Like many other algorithms out there, this one worked perfectly until a vulnerability was detected immediately exploited. The first investigation report indicates that the algorithm
     
     fails whenever two or more keys are similar, that is, when they are composed of exactly the same digits.
     
     A quick-fix to this problem is quite simple:
     
     for each group of K similar keys, the algorithm must take K - 1 off L.
     
     Your task is very simple. Write a program that calculates the final size of L.
     Input specification
     
     Line 1: the number N (1 <= N <= 10^5) of keys in L.
     Lines 2 … N + 1: a key in L. It is guaranteed that all keys will contain no more than 31 digits and no key starts with a digit zero.
     Output specification
     
     A single line with the answer to the problem.
     
     Sample input
     
     5
     432
     324
     4322
     4322
     
     6
     432
     324
     324
     4322
     4322
     158
     1589
     324
     
     6
     432
     432
     324
     324
     4322
     4322
     
     7
     432
     432
     432
     324
     324
     4322
     158
     
     4
     432
     324
     4322
     158
     
     Sample output
     
     3
     */
