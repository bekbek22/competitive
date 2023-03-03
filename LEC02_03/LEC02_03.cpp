#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    long x, sum1, sum2;
    sum1 = 0;
    sum2 = 0;
    cin >> x;

    for (int i = 1; i <= x; i++ ) {
        sum1 = i*i;
        sum2 = sum1 + sum2;

    }

    cout << sum2;
}