#include <iostream>
#include <stack>
#include <queue>
#include <string>

using namespace std;
void Keyboard(string s);

int main() {
    string s, newstr;
    cin >> s;
    //getline(cin, str);
    Keyboard(s);
    //cout << s;
}

// void Keyboard(string s) {
//     stack<char> st;
//     string front;
//     string newstr;
//     int i = 0;
//     while (i < s.length()) {
//         if (s[i] == '[') {
//             i++;
//             while (s[i] != ']') {
//                 front += s[i];
//                 i++;
//             }
//             i++;
//         } else {
//             newstr += s[i];
//             i++;
//         }
//     }

//     cout << front + newstr;
// }

void Keyboard(string s) {
    stack<char> st;
    string newstr;
    int i = 0;

    while(i < s.length()) {
        if () {
            
        }
    }

}
