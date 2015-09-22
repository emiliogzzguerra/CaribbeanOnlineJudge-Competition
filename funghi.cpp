//
//  main.cpp
//  funghi
//
//  Created by Emilio Gonzalez on 9/14/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int x,biggest = 0,acc,sum = 0,a,b,c;
    vector<int>evaluate;
    for (int i = 0; i<8; i++) {
        scanf("%i",&x);
        evaluate.push_back(x);
    }
    for (int i = 0; i<8; i++) {
        a = (i+1)%8;
        b = (i+2)%8;
        c = (i+3)%8;
        sum = (evaluate[i] + evaluate[a] + evaluate[b] + evaluate[c]);
        if (sum > biggest) {
            biggest = sum;
        }
    }
    printf("%i",biggest);
}

/*
 Sample input
 
 5
 2
 1
 4
 5
 1
 2
 3
 Sample output
 
 12
 Hint(s)
 
 Input Example 2
 2
 6
 5
 3
 3
 7
 2
 6
 
 Output Example 2
 19
*/