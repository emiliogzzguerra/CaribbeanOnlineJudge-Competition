//Re-usable C++ Knowledge:

#include <iostream> //cin cout
#include <stdio.h> //scanf and printf
#include <vector> //vectors
#include <string.h> //???
#include <string> //???
#include <algorithm> //Sort, accumulate
#include <numeric> //abs
#include <cmath> //pow(), 

//"Infinite loop" until something happens

sum = 1;
while (sum != 0) {
    scanf("%i %i",&n1,&n2);
    if (n1 == 0 && n2 == 0) { //If this happens 
        return 0; //End the loop
    } else {
    first = n1/n2;
    second = n1%n2;
    printf("%i %i / %i\n",first,second,n2);
    }
}


//Finding all possible combinations of n numbers that return k
int findCombinations(int k, int n){
	x = n + k - 1;
    y = n - 1;
    z = k;
    for (int i = x; i>0; i--) {
        f1 *= i;
    }
    for (int i = y; i>0; i--) {
        f2 *= i;
    }
    for (int i = z; i>0; i--) {
        f3 *= i;
    }
    r = (f1/(f2*f3));
    cout << r;
    f1 = 1;
    f2 = 1;
    f3 = 1;
}

//Factorial function 
int factorial(int x){
	for (int i = x; i>0; i--) {
        f1 *= i;
    }
}

								**Vectors**+
vector<char>vector; //Declaring a vector of type char named vector
int a = vector.size(); //a would have the size of the vector
vector.clear(); //Clears vector
a = vector[0]; //a would be whatever's inside the 0 value of vector.
vector.push_back(x); //Store at the last value of ouput x
sort(ouput.begin(), ouput.end()); //Sorts from smallest to biggest the vector
//Store on x how many times does vector contain ev
x = count(vector.begin(), vector.end(), ev);
//Erase every item that contains ev
vector.erase(remove(vector.begin(), vector.end(), ev), vector.end());
//Sum all the items from the begining to the end and add to it '0'
acc = accumulate(result.begin(),result.end(),0);


							**String manipulation**
string example = binary.substr(1,3); //If binary was "abcde" example would be "bcd"
int a = exaple.length(); //Example's length will be stored in a
binary.insert(0, "0"); //Inserts at the beginning of binary a "0"
char example = candies.at(0); //If candies was "abcde" example would be "a"
y = alphabet.find(x); //If alphabet was "ABC" and x was "A", y = 0 (Finds the positions of what you're looking for)
alphabet.count(x); // Counts amount of times that x was found in alphabet.
s == string(s.rbegin(), s.rend()) //If s = AMA this would return true (Reverse of a string)
"ABCDEFGHIJKLMNOPQRSTUVWXYZ" //Alphabet
"AHIMOTUVWXY" //Letters that look the same in a mirror
//Find wether x is in str
bool seek(string str, char x) {
	if (find(str.begin(), str.end(), x)!= str.end()) {
		return true;
	} else {
		return false;
	}
}

								**Int manipulation**
abs(sum) //Returns absolute value of sum
digits = log10(fResult)+1; //Find the amount of digits of fresult


									**Input**
scanf("%i %i",&n,&k); //&example to store the values in a variable
//Input line until enter was pressed, including spaces.
cin.ignore();
getline(cin, first); 

									**Output**
printf("%s\n",output.c_str()); //Use .c_str() to vector strings
printf("%i\n",a);

                                    **Templates**

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    
}

Print vectors:

for (int i = 0; i<vector.size(); i++) {
        printf("Vector at %i = %i",i,vector[i]);
}

Print:

printf("%i",x);