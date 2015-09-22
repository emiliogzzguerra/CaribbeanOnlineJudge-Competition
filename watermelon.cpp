//
//  main.cpp
//  watermelon
//
//  Created by Emilio Gonzalez on 9/5/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//
/*
 Description
 
 One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.
 
 Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.
 
 Input specification
 
 The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.
 Output specification
 
 Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.
 Sample input
 
 8
 Sample output
 
 YES
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int weight;
    bool possible = false;
    scanf("%i",&weight);
    for (int i=1; i<= weight/2; i++) {
        if (i%2 == 0 && (weight-i)%2 == 0) { //Todo lo que pase aqui va a ser factor
            possible = true;
        } //No son factores
    }
    if (possible != true) {
        printf("NO");
    } else {
        printf("YES");
    }
}
