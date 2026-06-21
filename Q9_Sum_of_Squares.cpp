// Q9_Sum_of_Squares.cpp
#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += i * i;
    }

    cout << "Sum of Squares = " << sum;
    return 0;
}