//
//  main.cpp
//  penaltyCalculation
//
//  Created by Emilio Gonzalez on 9/7/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int cases,result = 0,value,small = 301; //Small is 301 because the max it can be is 300
    vector<int>data;
    vector<int>values;
    vector<string>strings;
    string str;
    char final;
    bool va = false;
    cin >> cases; //First input determining the amount of submits
    for (int i = 0; i<cases; i++) {
        cin >> value;   //Minute of submission
        cin >> str;     //What the judge says...
        data.push_back(value); //Store the minutes of submission in this vector
        final = str.at(0); //Evaluate the first letter of each string
        if (final == 'A') { //If accepted
            va = true;  //Set value accepted as true
            values.push_back(value); //Store the minute of submission in a different array
        }
    }
    //Find the smallest minute of submission of the accepted vector
    for (int i = 0; i<values.size(); i++) {
        if (values[i] < small) {
            small = values[i];
        }
    }
    //Depending on wether there was an accepted value or not do...
    if (va == true) {
        sort(data.begin(),data.end());
        for (int i = 0; i < data.size(); i++) {
            if (small > data[i]) { //If the minute of submission is smaller than small add 20 to the result
                result += 20;
            } else { //If the minute of submission is bigger than small add small to the result
                result += small;
                cout << result; //Display result
                return 0; //End the program
            }
        }
    } else { //No accepted values were recieved, set result to 0 and display it.
        result = 0;
        cout << result;
    }
}
