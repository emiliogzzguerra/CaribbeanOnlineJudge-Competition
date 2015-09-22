//
//  main.cpp
//  binary
//
//  Created by Emilio Gonzalez on 9/6/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>

using namespace std;

int main() {
    string binary,ev;
    bool finished = false;
    cin >> binary;
    while (finished != true) {
        if (binary.length()%3 != 0) {
            binary.insert(0, "0");
        } else {
            finished = true;
        }
    }
    int i = 0;
    finished = false;
    while (finished != true) {
        ev = binary.substr(i,3);
        if (ev == "000") {
            printf("0");
        } else if (ev == "001") {
            printf("1");
        } else if (ev == "010") {
            printf("2");
        } else if (ev == "011") {
            printf("3");
        } else if (ev == "100") {
            printf("4");
        } else if (ev == "101") {
            printf("5");
        } else if (ev == "110") {
            printf("6");
        } else if (ev == "111") {
            printf("7");
        }
        if (i == (binary.length()-3)) {
            finished = true;
        } else {
            i += 3;
        }
    }
}
