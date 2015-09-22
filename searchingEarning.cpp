//
//  main.cpp
//  searchingEarning
//
//  Created by Emilio Gonzalez on 9/14/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;

int main() {
    int n,m,in,sum = 0,ev;
    vector<int>items;
    scanf("%i %i",&n,&m);
    for (int i = 0; i<n; i++) {
        scanf("%i",&in);
        items.push_back(in);
    }
    sort(items.begin(), items.end());
        if (items[0] < 0) {
            sum = items[0];
            for (int i = 1; i<m; i++) {
                ev = sum + items[i];
                if (ev < sum) {
                    sum = sum + items[i];
                } else {
                    break;
                }
            }
            if (sum<0) {
                printf("%i",abs(sum));
            } else {
                sum = (sum * -1);
                printf("%i",sum);
            }
        } else {
            printf("0");
        }
}
/*
 Description
 
 King Carlos has sent one of his knights to a market of ancient articles, in which the price for each object depends on the year and the utility that has been given. Some items instead of loose money they give you money if they are purchased, as these have many years, like as swords and any other metal objects. The knight is trying to find the best possible gain, as he knows that anything you buy will be useful in the kingdom. With the knight are some guards to transport objects to the kingdom. 
 
 **Each guard can only carry one object at a time and can be the case that a guard does not lead object.**
 
 The knight wants to bring the reign of purchased items but as long as you contribute as much profit as possible.
 
 Before starting the advisor of King taught him how to make the most profit possible. As the market where the gentleman had gone to buy the objects it was too far, he was forgotten as was the strategy he had been told. You are being asked to help the gentleman make the most profit possible.
 
 Input specification
 
 The input contains two numbers 1 <= M <= N <= 1000, N is the number of objects that are selling on the market, ** M represents the number of guards that the gentleman has taken to buy or not M objects whenever the biggest possible profit is obtained. In the following line N-Numbers separated by a space will appear, every number is in the interval (-1000 <= Vi <= 1000) that represents the value that has to buy the object i.
 
 Output specification
 
 The output contains one integer value that represents the profit that the gentleman can obtain with the values of each of the objects.
 
 Sample input
 
 5 3
 1 0 35 3 4
 
 5 3
 -6 10 35 6 7
 
 6 3
 0 0 1 2 3 4
 
 5 3
 -6 3 35 -2 4
 
 5 3
 -6 3 35 -2 4
 
 Sample output
 
 8
*/