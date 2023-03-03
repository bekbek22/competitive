#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long x, ans; //1 4 9 16 25 36 49 64 81 100
    cin >> x;
    
    ans = ceil(sqrt(x)-1);
    
    cout << ans;
    
}