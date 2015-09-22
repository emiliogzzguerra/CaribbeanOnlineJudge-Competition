//
//  main.cpp
//  sortingAndSearching
//
//  Created by Emilio Gonzalez on 9/12/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n,r,q1,q2,q;
    vector<int>nN;
    scanf("%i",&n);
    for (int i = 0; i<n; i++) {
        scanf("%i",&r);
        nN.push_back(r);
    }
    sort(nN.begin(), nN.end());
    scanf("%i %i",&q1,&q2);
    for (int i = 0; i<q1; i++) {
        scanf("%i",&q);
        if (find(nN.begin(), nN.end(), q)!=nN.end()) {
            printf(":)\n");
        } else {
            printf(":(\n");
        }
    }
    for (int i = 0; i<q2; i++) {
        scanf("%i",&q);
        r = nN.at(q-1);
        printf("%i\n",r);
    }
}

/*
 
 for (int i = 0; i<nN.size(); i++) {
 printf("%i",nN[i]);
 }
 
 Description
 
 Given 1 <= N <= 10 ^ 3 numbers between 1 and 10 ^ 9, you must answer:
 
 Between 1 <= Q1 <= 10 ^ 4 questions where, for each, will be asked to determine whether a given number is or is not on the list initially provided.
 
 Between 1 <= Q2 <= 10 ^ 4 questions where, for each, are asked to know the i-th smallest number in the list initially provided (suggested sort the list).
 Input specification
 
 The first line of input the amount of provided numbers in the list: N.
 The second line contains N integer numbers between 1 and 10 ^ 9, separated by exactly one blank.
 The third line contains the number of questions to ask, separated by exactly one blank: Q1 and Q2.
 The fourth line contains Q1 integer numbers between 1 and 10 ^ 9, separated by exactly one blank: the numbers to answer the questions of the first kind.
 The fifth line contains Q2 integer numbers between 1 and N, separated by exactly one blank: the numbers to answer the questions of the second type.
 Output specification
 
 For each question of first type, in the order of entry, you must print a line with characters ":)" if the number is provided in the initial list. Conversely, if the number is not provided in the initial list you must print a line with characters ":(". Then, for each question of second type, in the order of entry, you must print a line with the ith smallest number in the list initially provided. Note that quotes should not be printed in any case.
 
 Sample input
 
 5
 45 3424 999999999 5 5
 //1 2 3  4    5
 //5 5 45 3424 999999999
 
 5
 45 3424 999999999 5 5
 3 6
 999999999 54 45
 4 2 3 5 1 3
 
 5
 45 3424 99999999 5 5
 3 6
 999999999 54 45
 4 2 3 5 1 3
 
 Sample output
 
 :)
 :(
 :)
 3424
 5
 45
 999999999
 5
 45
*/