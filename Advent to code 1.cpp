// Advent of code 01

#include <iostream>
#include <cmath>

//find the two entries that sum to 2020 and then multiply those two numbers together.

using namespace std;

int main() {
    int userInput[200] ;

    for (int i = 0; i < 200; i++){
        cin >> userInput[i];
    }
    
    for (int i = 0; i < 200; i++){
        for (int j = 1; j < 199 ; j++){
            if (userInput[i] + userInput[i+j] == 2020){
                cout << userInput [i] << " + " << userInput [i+j] << endl;
                cout << userInput [i] * userInput [i+j] << endl ;
            }
        }
    }
    
    
}
