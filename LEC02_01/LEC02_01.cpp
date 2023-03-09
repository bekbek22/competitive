#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int x;
    int m = 0;
    int n = 1;
    cin>>x;
    m = x;

    if (x == 0) {
        m = 0;
        n = 0;
    }

    while (x != 1 && x > 0) {

        if (x % 2 == 0) {
            
            x = pow(x, 0.5);
            m = max(m, x);
            n++;

        } else if (x % 2 == 1) {

            x = pow(x, 1.5);
            m = max(m, x);
            n++;

        }
    }
    
    cout<<m<<" "<<n;
}