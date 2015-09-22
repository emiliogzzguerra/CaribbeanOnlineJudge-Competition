//
//  main.cpp
//  mixedFractions
//
//  Created by Emilio Gonzalez on 9/4/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//
/*Description
 
 You are part of a team developing software to help students learn basic mathematics. You are to write one part of that software, which is to display possibly improper fractions as mixed fractions. A proper fraction is one where the numerator is less than the denominator; a mixed fraction is a whole number followed by a proper fraction. For example the improper fraction 27/12 is equivalent to the mixed fraction 2 3/12. You should not reduce the fraction (i.e. don’t change 3/12 to 1/4).
 Input specification
 
 Input has one test case per line. Each test case contains two integers in the range [1; 2^31 – 1]. The first number is the numerator and the second is the denominator. A line containing 0 0 will follow the last test case.
 Output specification
 
 For each test case, display the resulting mixed fraction as a whole number followed by a proper fraction, using whitespace to separate the output tokens.
 Sample input
 
 27 12
 2460000 98400
 3 4000
 0 0
 Sample output
 
 2 3 / 12
 25 0 / 98400
 0 3 / 4000
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n1,n2,sum,first,second;
    sum = 1;
    while (sum != 0) {
        scanf("%i %i",&n1,&n2);
        if (n1 == 0 && n2 == 0) {
            return 0;
        } else {
        first = n1/n2;
        second = n1%n2;
        printf("%i %i / %i\n",first,second,n2);
        }
    }
}
