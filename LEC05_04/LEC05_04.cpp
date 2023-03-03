#include <iostream>

using namespace std;

int main() {
    string s;
    long long varnum = 0, tmp = 0, count = 0, result = 0; // A = 65 B = 66 Z = 90 ......
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        varnum = s[i];
        
        if (i != s.length() - 1) {
            tmp = s[i+1];
        }
        
        if (varnum - tmp == 1) {
            continue;
        } else {
            result++;
        }
    
    }
    
    cout << result;
}