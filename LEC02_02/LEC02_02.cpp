#include <stdio.h>
#include <iostream>
using namespace std;

int main() {

    long x, answer, sum1;
    long sum2 = 0;
    cin >> x;
    // 1 3 6 10
    for (int i = 1; i <= x; i++) {

        sum1 = (i*i) + i;
        sum2 += sum1;

    }

    answer = (0.5)*sum2;
    cout << answer;

}