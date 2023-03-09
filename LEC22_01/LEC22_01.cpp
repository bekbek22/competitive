#include <iostream>

using namespace std;

long long TrillV1(long long n, long long m) {
    // if (n == m) {
    //     return 2;
    // } else if (n < m) {
    //     return 1;
    // } else {
    //     return TrillV1(n-1, m) + TrillV1(n-m, m);
    // }
    long long c[n+1];
    c[0] = 0;
    for(int i = 1; i <= n; i++){
        if (i > m) {
            c[i] = c[i-1] + c[i-m]; 
        } else if (i < m) {
            c[i] = 1;
        } else {
            c[i] = 2;
        }
    }
    return c[n];
}

int main () {
    long long n , m;
    // scanf("%d %d", &n, &m);
    cin >> n;
    cin >> m;
    long long result = TrillV1(n, m);
    cout << result;
    
}