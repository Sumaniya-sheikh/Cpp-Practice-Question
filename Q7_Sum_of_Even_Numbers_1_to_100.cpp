// Q7_Sum_of_Even_Numbers_1_to_100.cpp
#include<iostream>
using namespace std;

int main() {
    int sum = 0;

    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Sum = " << sum;
    return 0;
}