#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> list;
    long long n, min, maxx;
    min = 0;
    maxx = 0;
    scanf("%Ld", &n);

    for(int i=0;i<n;i++) {
        long long temp;
        scanf("%Ld", &temp);
        min += temp;
        maxx = max(maxx, min);
        if(min < 0) {
            min = 0;
        }
    }
    cout<<maxx;
    return 0;
}
