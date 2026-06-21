// Q10_Sum_of_Cubes.cpp
#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        sum += i * i * i;
    }

    cout << "Sum of Cubes = " << sum;
    return 0;
}