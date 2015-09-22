//
//  main.cpp
//  euroBus
//
//  Created by Emilio Gonzalez on 9/13/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int t,k,ans;
    double add = 0.0;
    scanf("%i",&t);
    for (int i = 0; i<t; i++) {
        scanf("%i",&k);
        for (int j = 0; j<k; j++) {
            add += 0.5;
            add += add;
        }
        ans = add;
        printf("%i\n",ans);
        add = 0.0;
    }
}
/*
1
.5 + .5

2
.5 + .5 + .5 + 1.5

3
.5 + .5 + .5 + 1.5 + .5 + 3.5
 
4
.5 + .5 + .5 + 1.5 + .5 + 3.5 + .5 + 7.5
*/
