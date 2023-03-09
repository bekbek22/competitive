#include <bits/stdc++.h>
using namespace std;

class wh{
public:
    vector<int> v;

    void init(vector<int> o){
        v = o;
    }

    void ADD(int i, int j) {
        i--;
        if(v[i] < j) {
            v[i]++;
        }
        display();
    }

    void DELETE(int i, int j) {
        i--;
        if(v[i] >= j) {
            v[i]--;
        }
        // printf("delete no.%d level %d\n\n", i, j);
    }

    void BOMB(int i, int j) {
        i--;
        int tl=j+1, ll=j-1, li=i-1, ri=i+1;
        if(ll<0) { ll=0; }
        if(li<0) { li=0; }
        if(ri>v.size()-1) { ri=v.size()-1; }
        for(tl=j+1; tl>=ll; tl--) {
            for(li=i-1; li<=ri; li++) {
                DELETE(li+1, ll);
                // printf("delete no.%d level %d\n", li, tl);
            }
        }
        display();
    }

    void LAZER(int i) {
        for(int x=0; x<=v.size(); x++) {
            DELETE(x, i);
        }
        display();
    }

    void display() {
        for(int i=0; i<v.size()-1; i++) {
            printf("%d ", v[i]);
        }
        printf("%d\n", v[v.size()-1]);
    }
};

int main() {
    wh warehouse;
    vector<int> l;
    int n, t, temp, x, y, z;
    scanf("%d %d", &n, &t);

    while(n--) {
        scanf("%d", &temp);
        l.push_back(temp);
    }
    
    warehouse.init(l);

    while(t--) {
        scanf("%d", &x);
        if(x == 1) {
            scanf("%d %d", &y, &z);
            warehouse.ADD(y, z);
        } else if (x == 2) {
            scanf("%d %d", &y, &z);
            warehouse.DELETE(y, z);
            warehouse.display();
        } else if (x == 3) {
            scanf("%d %d", &y, &z);
            warehouse.BOMB(y, z);
        } else {
            scanf("%d", &y);
            warehouse.LAZER(y);
        }
    }
    return 0;
}