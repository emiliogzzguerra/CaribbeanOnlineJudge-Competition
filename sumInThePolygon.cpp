//
//  main.cpp
//  sumInThePolygon
//
//  Created by Emilio Gonzalez on 9/12/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <numeric>
#include <cmath>


using namespace std;

int main() {
    int x,y,z,fResult,a,b,c,d,e = 0,acc,digits,half,k,l,n;
    double sizeR;
    vector<int>integers;
    vector<int>result;
    scanf("%i",&x);
    half = (x/2);
    z = x - 1.0;
    //Get input
    for (int i = 0; i<x; i++) {
        scanf("%i",&y);
        integers.emplace_back(y);
    }
    //Sort input
    sort(integers.begin(), integers.end());
    
    //If x is an even number
    if (x%2 == 0) {
        //Optimize the arrangement of the numbers
        for (int i = 0; i<half; i+=2) {
            a = z-i; //a = (amountOfNumbers - 1) - i
            b = x-a; //b = amountOfNumbers - a
            sizeR = result.size(); //Find the size of the array
            if (sizeR < half) { //If the size is less than the half
                result.emplace_back(integers[a]); //Push back this item
            }
            if (sizeR < half) { //Check again if the size of the half
                result.emplace_back(integers[b]); //Push back this item
            }
            e = i; //Store the iterator
            if (sizeR >=half) { //If the size is bigger than or equal to half
                //Store the other half of the numbers in result
                for (int i = e; i>=0; i-=2) {
                    a = z-i;
                    b = x-a;
                    c = a-1;
                    d = b-1;
                    if (half % 2 != 0 && i == e) { //If the half is odd and it's the first iteration
                        result.emplace_back(integers[c]);
                    } else { //Else store these numbers
                        result.emplace_back(integers[c]);
                        result.emplace_back(integers[d]);
                    }
                }
                result.erase(result.end() - half); //Erase the number in the middle
                break;
            }
        }
        acc = accumulate(result.begin()+2,result.end()-1,0);
        fResult = (result[0]*acc);
        for (int i = 1; i<=(result.size()-2); i++) {
            acc = accumulate(result.begin()+(i+2),result.end(),0);
            fResult += result[i]*acc;
        }
        digits = log10(fResult)+1;
        if (digits<5) {
            digits = 5-digits;
            for (int i = 0; i<digits; i++) {
                printf("0");
            }
            printf("%i",fResult);
        } else {
            printf("%i",fResult);
        }
    } else {
        result.emplace_back(integers[x-1]);
        for (int i = 1; i<x; i+=2) {
            result.emplace_back(integers[i-1]);
            result.emplace_back(integers[z-i]);
        }
        acc = accumulate(result.begin()+2,result.end()-1,0);
        fResult = (result[0]*acc);
        for (int i = 1; i<=(result.size()-2); i++) {
            acc = accumulate(result.begin()+(i+2),result.end(),0);
            fResult += result[i]*acc;
        }
        digits = log10(fResult)+1;
        if (digits<5) {
            digits = 5-digits;
            for (int i = 0; i<digits; i++) {
                printf("0");
            }
            printf("%i",fResult);
        } else {
            printf("%i",fResult);
        }
    }
}



/*
 for (int i = 0; i<result.size(); i++) {
 printf("%i\n",result[i]);
 }
 Description

 The people of IslaGrande placed N points on a circle which correspond to the vertices of a regular convex polygon. All diagonals of the polygon are drawn, except its sides. A positive integer not necessarily different be assigned to each of the vertices, this action will call distribution. Also in each diagonal we write the product of the numbers assigned to its end.
 
 Write a program to find a distribution that maximizes the sum of the writings numbers in each of the diagonals of the polygon.
 Input specification
 
 The input contains:
 - Line 1: N (3 < N <= 100 000), the amount of numbers.
 - Line 2: N integers, separated by a space. The N integers are positive and not greater than one million.
 Output specification
 
 The output contains exactly five digits without spaces between them, which correspond to the maximum sum obtained from the numbers written on each of the diagonals of the polygon. If the maximum sum obtained has more than five digits write only the last five digits to the right following the order. In the other hand, if the maximum sum obtained is less than five digits write the zeros of the leftmost digit.
 Sample input
 
 7
 15 12 2 12 10 11 10
 
 8
 3 2 1 5 5 6 7 4
 
 9
 15 12 2 12 10 11 10 16 17
 
 6
 1 2 3 4 5 6
 
 10
 1 3 3 4 5 6 7 8 9 10
 
 7
 15 12 2 12 10 11 10
 
 Sample output
 
 01487
*/