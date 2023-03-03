#include<bits/stdc++.h>
using namespace std;

long long cutRod(long long price[], long long n) {
    long long val[n+1];
    val[0] = 0;
    long long i, j;

    for(i=1; i<=n; i++) {
        long long maxVal = LONG_LONG_MIN;
        for(j=0; j<i; j++)
            maxVal = max(maxVal, price[j] + val[i-j-1]);
        val[i] = maxVal;
    }
    return val[n];
}

int main() {
    long long n, k;
    scanf("%Ld", &n);
    long long rope[n];
    for(long long i=0; i<n; i++) {
        long long temp;
        scanf("%Ld", &temp);
        rope[i] = temp;
    }
    scanf("%Ld", &k);
    cout<<cutRod(rope, k);
}