// Q5_First_10_Odd_Numbers.cpp
#include<iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 20; i++) {
        if(i % 2 != 0) {
            cout << i << endl;
        }
    }
    return 0;
}