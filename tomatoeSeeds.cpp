//
//  main.cpp
//  tomatoeSeeds
//
//  Created by Emilio Gonzalez on 9/9/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int value,cases,dif,a = 0;
    vector<int>space;
    bool possible = true;
    scanf("%i",&cases);
    for (int i = 0; i<cases; i++) {
        cin >> value;
        space.push_back(value);
    }
    sort(space.begin(),space.end());
    dif = space[1] - space[0];
    for (int i = 1; i<space.size(); i++) {
        a = i-1;
        if (space[i]-space[a] != dif) {
            possible = false;
        }
    }
    if (possible == false) {
        printf("NO");
    } else {
        printf("YES");
    }
}
