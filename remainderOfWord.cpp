//
//  main.cpp
//  remainderOfWord
//
//  Created by Emilio Gonzalez on 9/12/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int result = 1,z = 0,r = 0,y;
    char x;
    string str;
    vector<int>upperCaseLetters;
    string vocab = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //A B C D E F G H I J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
    //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
    cin >> str;
    for (int i = 0; i<str.length(); i++) {
        x = str.at(i);
        y = vocab.find(x);
        y++;
        if (i == 0) {
            r = y;
            r = r%26;
        } else {
            r *= y;
            r = r%26;
        }
    }
    if (r < 10) {
        printf("0%i\n",r);
    } else {
        printf("%i\n",r);
    }
}
