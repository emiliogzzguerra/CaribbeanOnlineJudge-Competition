//
//  main.cpp
//  alice
//
//  Created by Emilio Gonzalez on 9/7/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int cases,n,p,ans = 0,a = 0;
    string trick;
    scanf("%i",&cases);
    for (int i = 0; i<cases; i++) {
        scanf("%i",&n);
        cin >> trick;
        scanf("%i",&p);
           if (trick == "odd") {
               for (int j = 1; j<=n; j++) {
                   if (j%2 == 0) {
                       if (a != p) {
                           ans = j;
                           a++;
                       }
                   }
               }
            printf("%i\n",ans);
            } else {
                for (int j = 1; j<=n; j++) {
                    if (j%2 != 0) {
                        if (a != p) {
                            ans = j;
                            a++;
                        }
                    }
                }
            printf("%i\n",ans);
            }
        a = 0;
        ans = 0;
    }
}
