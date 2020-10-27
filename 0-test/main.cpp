#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    // string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    // int myNum[3] = {10, 20, 30};

    // cout << cars[0];
    // cout << myNum[2];
    // cout << "\n";
    // for(int i = 0; i < 4; i++){ 
    //     cout << i << " " << cars[i] << "\n";

    // }
    // cout << "\n";
// '''
// references
// '''
    // string food = "Pizza";  // food variable
    // string &meal = food;    // reference to food

    // cout << food << "\n";   // Outputs Pizza
    // cout << meal << "\n";   // Outputs Pizza

    // return 0;

// '''
// Memory Address
// '''
    string food = "Pizza"; // A food variable of type string
    string* ptr = &food; // A pointer variable, with the name prt, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x...)
    cout << &food << "\n";

    // Output the memory address of fodd with the pointer (0x...)
    cout << ptr << "\n"

    return 0;
}