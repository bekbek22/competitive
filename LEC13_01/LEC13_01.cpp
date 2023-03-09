#include<bits/stdc++.h>
using namespace std;

long long change(vector<int> atk, int V){
    int C[V+1], min;
    C[0] = 0;
    for(int i=1; i<=V; i++) {
        min = V;
        for(int j=0; j<atk.size(); j++) {
            if(i >= atk[j]) {
                if(C[i - atk[j]] + 1 < min) {
                    min = C[i-atk[j]] + 1;
                }
            }
        }
        C[i] = min;
    }
    return C[V];
}

int main() {
    int n, k;
    vector<int> atk;
    scanf("%d", &n);
    scanf("%d", &k);
    while(k--) {
        int temp;
        scanf("%d", &temp);
        atk.push_back(temp);
    }
    cout<<change(atk, n);
    return 0;
}