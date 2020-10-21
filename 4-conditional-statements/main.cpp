#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n;
    string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> n; //input number to be translated into word
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if ((n>=1) && (n<=9)){
        cout << numbers[n-1];
    }
    else {
        cout << "Greater than 9";
    }

    return 0;
}