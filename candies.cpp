//
//  main.cpp
//  candies2
//
//  Created by Emilio Gonzalez on 9/10/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    string candies,output;
    char a,b = '\0';
    int x = 1,f = 0,m = 0,r = 0,biggestFM,biggest;
    cin >> candies;
    if (candies.length() == 1) {
        a = candies.at(0);
        switch (a) {
            case 82: //R
                r++;
                break;
            case 77: //M
                m++;
                break;
            case 70: //F
                f++;
                break;
            default:
                break;
        }
    } else if (candies.length() == 2) {
        for (int i = 0; i<2; i++) {
            a = candies.at(i);
            switch (a) {
                case 82: //R
                    r++;
                    break;
                case 77: //M
                    m++;
                    break;
                case 70: //F
                    f++;
                    break;
                default:
                    break;
            }
        }
    
    } else {
        for (int i = 0; i<candies.length(); i++) {
        if (i == candies.length()-1) {
        } else {
            a = candies.at(i);
            b = candies.at(i+1);
            switch (a) {
                case 82: //R
                    if (a == b) {
                        x ++;
                        if (x > r) {
                            r = x;
                        }
                    } else {
                        x = 1;
                    }
                    break;
                case 77: //M
                    if (a == b) {
                        x ++;
                        if (x > m) {
                            m = x;
                        }
                    } else {
                        x = 1;
                    }
                    break;
                case 70: //F
                    if (a == b) {
                        x ++;
                        if (x > f) {
                            f = x;
                        }
                    } else {
                        x = 1;
                    }
                    break;
                default:
                    break;
            }
        }
    }
    }
    if (f > m) {
        biggestFM = f;
        output = "Fish";
    } else {
        biggestFM = m;
        output = "Milk";
    }
    
    if (biggestFM > r) {
        biggest = biggestFM;
        printf("%i %s\n",biggest,output.c_str());
    } else {
        biggest = r;
        output = "Rat";
        printf("%i %s\n",biggest,output.c_str());
    }
}

/*
 Description
 
 Anders the cat has a line of candies in front of him, his master Dr. Frank B.Tree composed it of three different flavors: Milk, Fish and Rat, the cat was told to take as many as he wanted, but there are restrictions about it, first all candies must be of the same flavor, and second, he must take them from a consecutive subsequence.
 
 For instance:
 
 MMFRRRRMFMFMRRFFFMMMM
 
 In the line above Anders could pick sequences like the ones colored in blue, the ones in red are not valid.
 
 
 
 Being a cat, Anders has a greedy personality so he wants to maximize the amount of candies he can pick out of the line. Anders has preference over flavors, his favorite one is Rat, then Milk and finally Fish, in case he has to choose on candies of different flavors.
 Input specification
 
 A single string containing the line of candies. F for Fish, M for Milk and R for Rat.
 
 Output specification
 
 An integer representing the greatest amount of candies Anders can pick and a string naming their flavor.
 
 Sample input
 
 MMFRRRRMFMFMRRFFFMMM
 Sample output
 
 4 Rat
*/