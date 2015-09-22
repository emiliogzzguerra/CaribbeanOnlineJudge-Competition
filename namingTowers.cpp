//
//  main.cpp
//  namingTowers
//
//  Created by Emilio Gonzalez on 9/14/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int n,found;
    char x;
    string abc = "AHIMOTUVWXY";
    string s,reverse;
    scanf("%i",&n);
    for (int i = 0; i<n; i++) {
        cin >> s;
        for (int i = 0; i<s.length(); i++) {
            x = s.at(i);
        }
        found = count(abc.begin(), abc.end(), x);
        if (s == string(s.rbegin(), s.rend()) && found > 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

/*
 Description
 
 Naming towersIn the kingdom of King Carlos there exist 1 <= N <= 100 towers which protect its inhabitants of attacks of other reigns. The adviser of the King wants to facilitate the communication between the towers of the kingdom and for this it must name to each of the Towers. But not any name, the names must follow the next conditions.
 
 Only contain capital letters of the English alphabet.
 If the name of the tower it is written in a parchment and put front of a mirror, the reflex of the word must be equal to the written word.
 The letters used are:
 
 But he knows that all the words do not fulfill the conditions that he wishes, therefore he has asked you for help in this task.
 Input specification
 
 The input contain a number N that represents the number of towers that exist in the reign. In the following N-Lines it contains a sequence of letters that represents the name of the tower (every word has at most 100 characters).
 Output specification
 
 For each of the names print ‘YES’ if it fulfills the wished conditions, in the opposite case print ‘NO’.
 Sample input
 
 2
 AMA
 ZX
 Sample output
 
 YES
 NO
*/