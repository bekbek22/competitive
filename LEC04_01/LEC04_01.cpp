#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

void SieveOfEratosthenes(int n);

int main() {
    int n;
    cin >> n;
    SieveOfEratosthenes(n);
}

void SieveOfEratosthenes(int n) {

    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p*p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * 2; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            cout << p << " ";
        }
    }

}