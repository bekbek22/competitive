#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    char mode;
    int left,right,value;
    int array_ [n];
    int result[q];
    int count = 0;
    int lenght_ = 0;
    int a;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> array_[i];
        // cin >> a;
        // arr.push_back(a);
    }
    for(int i = 0; i < q; i++){
        cin >> mode;
        if(mode == 'C'){
            cin >> left >> right >> value;
            for(int j = left-1; j < right; j++){
                if(array_[j] <= value){
                    count += 1;
                }
            }
            result[lenght_] = count;
            lenght_ += 1;
            count = 0;
        }
        else if(mode == 'M'){
            cin >> right >> value;
            array_[right-1] = value;
        }
    }
    for(int i = 0; i < lenght_; i++){
        cout << result[i] << endl;
    }

    return 0;

}