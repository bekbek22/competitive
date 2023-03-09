#include <bits/stdc++.h>
using namespace std;

int query(int r, int l, int n, long max_block[], long arr[]){
    long m = arr[l];
    int blk_sz = ceil(sqrt(n));
    while (l < r && l % blk_sz != 0 && l != 0){
        // traversing first block in range
        if (arr[l] > m)
        {
            m = arr[l];
        }
        l++;
    }
    while (l + blk_sz <= r){
        // traversing completely overlapped blocks in range
        if (max_block[l / blk_sz] > m)
        {
            m = max_block[l / blk_sz];
        }
        l += blk_sz;
    }
    while (l <= r){
        // traversing last block in range
        if (arr[l] > m){
            m = arr[l];
        }
        l++;
    }
    return m;
}

void Build(long input[], int n, long arr[], long max_block[]){
    int blk_idx = -1;
    int blk_sz  = ceil(sqrt(n));
    for (int i = 0; i < n; i++){
        arr[i] = input[i];
        if (i % blk_sz  == 0){
            // entering next block
            // incementing block pointer
            blk_idx++;
            max_block[blk_idx] = arr[i];
        }

        max_block[blk_idx] = max(max_block[blk_idx], arr[i]);
    }
}
int sum_range(int max, int min, long arr[]){
    if (min == 0){
        return arr[max];
    }
    return arr[max] - arr[min - 1];
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long n = 0, m = 0, num = 0, max = 0, min = 0, blk_sz = 0, highest = 0;
    cin >> n >> m;
    blk_sz = ceil(sqrt(n));
    long a[n], b[n], high[m], distance[m], max_block[n], sum_block[n], arr[n];
    memset(max_block, 0, sizeof(max_block));
    memset(sum_block, 0, sizeof(sum_block));
    memset(high, 0, sizeof(high));
    memset(distance, 0, sizeof(distance));
    for (int i = 0; i < n; i++) {
        cin >> num;
        b[i] = num;
        
    }
    Build(b, n, arr, max_block); 
    num = 0;
    for (int i = 0; i < n; i++){
        cin >> num;
        a[i] = num;
        if (i == 0){
            sum_block[i] = a[i];
        }
        else{
            sum_block[i] = a[i] + sum_block[i - 1];
        }
    }
    for (int i = 0; i < m; i++){
        cin >> min >> max;
        high[i] = query(max, min, n, max_block, b);
        distance[i] = sum_range(max, min, sum_block); 
    }
    for (int i = 0; i < m; i++){
        cout << high[i] << " " << distance[i] << endl;
    }
    return 0;
}