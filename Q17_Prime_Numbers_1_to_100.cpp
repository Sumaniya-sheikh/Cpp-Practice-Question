// Q17_Prime_Numbers_1_to_100.cpp
#include<iostream>
using namespace std;

int main() {

    for(int i = 2; i <= 100; i++) {
        int j;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                break;
            }
        }

        if(j == i) {
            cout << i << " ";
        }
    }

    return 0;
}