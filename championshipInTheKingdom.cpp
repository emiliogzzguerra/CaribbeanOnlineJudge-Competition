//
//  main.cpp
//  championshipInTheKingdom
//
//  Created by Emilio Gonzalez on 9/14/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>


using namespace std;

int main() {
    int n,k,min,c;
    scanf("%i %i",&n,&k);
    min = n * k;
    c = n*(n-1)/2;
    if (c < min) {
        printf("-1");
    } else {
        printf("%i",min);
    }
}
