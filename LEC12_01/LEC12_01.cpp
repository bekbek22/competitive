#include <iostream>

using namespace std;

long long dp[50];

long long solve(int n) {
    //base case
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-3] + dp[i-4];
    }

    return dp[n];
}

int main() {

    long long n;
    cin >> n;
    cout << solve(n);
    return 0;
}
