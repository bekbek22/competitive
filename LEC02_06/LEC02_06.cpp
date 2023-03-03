#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long n, T, answer;
    cin >> n;
    long m = pow(10, 9) + 7; 
    T = (n * n) % m;
    answer = T % m;
    cout << answer;
}