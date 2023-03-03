#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    string s, reverse;
    stack<char> st;
    long long i = 0;
    getline(cin , s);

    for (i = 0; i < s.length(); i++) {
        st.push(s[i]);
        if (st.top() == ' ') {
            st.pop();
            while (st.empty() == false) {
                reverse += st.top();
                st.pop();
            }
            reverse += ' ';
        }
        
    }

    while (st.empty() == false) {
        reverse += st.top();
        st.pop();
    }

    cout << reverse;
}