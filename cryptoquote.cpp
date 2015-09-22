//
//  main.cpp
//  cryptoquote
//
//  Created by Emilio Gonzalez on 9/9/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    char y;
    int n,c,x;
    double ev;
    string first,second,alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<char>output;
    scanf("%i",&n);
    for (int i = 0; i<n; i++) {
        c = (i+1);
        cin.ignore();
        getline(cin, first);
        cin >> second;
        for (int i = 0; i<first.length(); i++) {
            x = first.at(i);
            switch (x) {
                case 32:
                    y = ' ';
                    output.push_back(y);
                    break;
                default:
                    ev = alphabet.find(x);
                    y = second.at(ev);
                    output.push_back(y);
                    break;
            }
        }
        printf("%i ",c);
        for (int i = 0; i<output.size(); i++) {
            printf("%c",output[i]);
        }
        printf("\n");
        output.clear();
    }
}

/*
 2
 HPC PJVYMIY
 BLMRGJIASOPZEFDCKWYHUNXQTV
 FDY GAI BG UKMY
 KIMHOTSQYRLCUZPAGWJNBVDXEF
*/