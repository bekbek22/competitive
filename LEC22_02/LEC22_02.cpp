#include <iostream>

using namespace std;

long long dp[30];

long long TrillV2(long long n) {

    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 3;
    for (int i = 4; i <= 30; i+=2) {
        dp[i] = 4*dp[i-2] - dp[i-4];
    }
    return dp[n];
}

int main () {
    long long n, m;
    // scanf("%d %d", &n, &m);
    cin >> n;
    long long result[n];

    for (int i = 0; i < n; i++) {
        cin >> m;
        result[i] = TrillV2(m);
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }
    
}