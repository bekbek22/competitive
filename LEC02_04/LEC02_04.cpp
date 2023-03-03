#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    long x, sum;
    cin >> x;
    sum = 0;

    for (int i = 1; i <= x; i++) {
  
        // first term of each i-th term
        int k = 2;
        for (int j = 1; j <= i; j++) {
            sum += k;
  
            // next term
            k += 2;
        }
    }

    cout << sum;
    
}