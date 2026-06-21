// Q11_Factorial.cpp
#include<iostream>
using namespace std;

int main() {
    int num;
    long long fact = 1;

    cout << "Enter a number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact;
    return 0;
}