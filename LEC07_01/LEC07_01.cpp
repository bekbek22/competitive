#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n,m;
    cin >> n >> m;
    long long arr [n];
    long long sum_ = 0;
    long long result [m];
    int a,b;
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        for(int j =a; j<= b; j++){
            sum_ = sum_ + arr[j];
        }
        result[i] = sum_;
        sum_ = 0;
    }
    for(int i = 0; i < m;i++){
        cout << result[i] << "\n";
    }

    return 0;
}