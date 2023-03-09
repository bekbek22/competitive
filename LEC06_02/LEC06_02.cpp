#include <bits/stdc++.h>
using namespace std;

/*
void printVector(vector<bool> v) {
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
*/

int main() {
    int ps, n, m, temp;
    int nm=0;
    scanf("%d %d", &n, &m);
    vector<bool> p,np;
    ps = std::pow(2, n);
    p.assign(ps, true);

    while(m--) {
        scanf("%d", &temp);
        p[temp-1] = false;
    }

    // printVector(p);
    int result=0;
    while(p.size() > 1) {
        // cout<<"This loop is working\n";
        for(int i=0; i<p.size(); i++) {
            if(p[i] == 1 && p[i+1] == 1) {
                np.push_back(true);
            } else if (p[i] == 0 && p[i+1] == 0) {
                np.push_back(false);
            } else {
                result++;
                np.push_back(true);
            }
            i++;
        }

        p = np;
        np.clear();
        // printVector(p);
    }
    cout<<result;
    return 0;
}