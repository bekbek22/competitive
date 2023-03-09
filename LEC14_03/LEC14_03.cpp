#include<bits/stdc++.h>
using namespace std;

const int N = 20;
int dist[N][N];
int memo[N][1<<N];
int n;

int tsp(int pos, int bitmask) {
    if (bitmask == (1 << n) - 1)
        return dist[pos][0];
    if (memo[pos][bitmask] != -1)
        return memo[pos][bitmask];
    int ans = 2000000000;
    for (int nxt = 0; nxt < n; nxt++)
        if (!(bitmask & (1 << nxt)))
            ans = min(ans, dist[pos][nxt] + tsp(nxt, bitmask | (1 << nxt)));
    return memo[pos][bitmask] = ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x_size,y_size;
    cin >> x_size >> y_size;
    int x_start,y_start;
    cin >> x_start >> y_start;
    cin >> n;
    n++;
    int x[n];
    int y[n];
    x[0] = x_start;
    y[0] = y_start;
    for(int i = 1; i < n; i++){
        cin >> x[i] >> y[i];
    }
    memset(memo, -1, sizeof memo);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dist[i][j] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
        }
    }

    cout << tsp(0, 1) << endl;
    return 0;
}