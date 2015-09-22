//
//  main.cpp
//  squareToys
//
//  Created by Emilio Gonzalez on 9/5/15.
//  Copyright (c) 2015 Emilio Gonzalez. All rights reserved.
//

    #include <iostream>
    #include <stdio.h>
    #include <vector>

    using namespace std;

    int main() {
        int t,c,a,b,sum,dif;
        vector<int>bB;
        vector<int>gB;
        vector<int>sBB;
        vector<int>answers;
        scanf("%i",&t);
        for (int i= 0; i<t; i++) { //Desde 0 hasta menor que cantidad de tests haz lo siguiente
            dif = 0; //Declarar variable a 0 (Necesario)
            scanf("%i",&c); //Escanear la cantidad de columnas y guardarlo en "c"
            for (int i = 0; i<c; i++) { //Desde i = 0 hasta i < c
                scanf("%i %i",&a,&b); //Escanear a y b
                bB.push_back (a); //Guardar a en el vector blueBlocks
                gB.push_back (b); //Guardar b en el vector greenBlocks
                sum = a+b; //Encontrar sumatoria de  b en el vector greenBlocks
                sBB.push_back(sum); //Guardar sumatoria en el vector sBB
            }
            sum = 0; //Declarar variable como 0 para quitarle el valor pasado
            for (int i = 0; i<sBB.size(); i++) { //Desde i = 0 hasta i < sBB.size()
                if (sBB[i] > sum) { //Si el numero dentro de sBB > sum
                    sum = sBB[i]; //Si el numero dentro de sBB > sum, guardar ese numero como sum
                }
            }
            for (int i = 0; i<sBB.size(); i++) { //Desde i = 0 hasta i < sBB.size()
                dif += (sum-sBB[i]); //Sumarle a dif la diferencia entre sum y sBB[i]
            }
            printf("%i\n",dif); //Imprimir dif
            gB.clear();
            bB.clear();
            sBB.clear();
        }
    }
