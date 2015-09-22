//
//  main.cpp
//  moveTheDogAround
//
//  Created by Emilio Gonzalez on 9/4/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

/*You want to increase the stamina of your puppy. Therefore you set up a n x m grid and marked each 1x1 unit with a red marker. In the past you trained your dog to move certain steps in a specified cardinal direction. That is, the dog is able to move a certain number of steps NORTH, SOUTH, EAST and WEST. You think that if you make your lazy puppy move around in the grid, he’ll eventually gain stamina and thus become a more proper dog. Please note the dog cannot step out of the grid at any time.
 
 One day you gave your dog a sequence of commands and eventually ended up at position (x, y). You think (x, y) is a very odd position and wonder how that happened. Of course, you forgot where you started from. Then, given the sequence of commands that led the dog to its final position, find out where the dog started from.
 Input specification
 
 The first line of input contains two space-separated positive integers n and m (1 <= n, m <= 50). The second line of the input contains three space-separated positive integers x, y (1 <= x <= n, 1 <= y <= m) and count (0 <= count <= 1000). They are, respectively, the row and column coordinates of the final position, as well as the number of commands you gave the dog. Then there are count lines. Each of these lines contain the i-th command. The i-th command is a space-separated pair of the cardinal position (a character N (North), S (South), E (East), W (West)) and a positive integer steps representing how many steps to take in that direction. It is guaranteed that no command will ever force the dog outside the boundaries of the grid. Also, please note that these lines are given in order. That is, the first line corresponds to the first command you gave the dog, not the last one.
 Output specification
 
 Output two space-separated positive integers representing the coordinate of the starting position.
 Sample input
 
 3 3
 3 3 5
 E 1
 S 1
 W 1
 S 1
 E 2
 Sample output
 
 1 1
 Hint(s)
 
 Below is an illustration of the dog's path:
*/

#include <iostream>

using namespace std;

int main() {
    int gridx, gridy, finalx, finaly, moves, input;
    char direction;
    cin >> gridx >> gridy;
    cin >> finalx >> finaly >> moves;
    for (int i = 0; i<moves; i++) {
        cin >> direction >> input;
        switch (direction) {
            case 'E':
                finaly = finaly - input;
                break;
            case 'W':
                finaly = finaly + input;
                break;
            case 'N':
                finalx = finalx + input;
                break;
            case 'S':
                finalx = finalx - input;
                break;
            default:
                break;
        }
    }
    cout << finalx << " " << finaly;
}
