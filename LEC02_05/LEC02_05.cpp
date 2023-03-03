#include <stdio.h>
#include <iostream>
using namespace std;

void GCD(int n1, int n2);

int main() {
    int x = 1;
    int y = 2;
    
    GCD(4,10);

}

void GCD(int n1, int n2) {

    int gcd;

    for(int i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
}