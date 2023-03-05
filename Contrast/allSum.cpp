#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<char, char> char_to_num = {
    {'a', '2'}, {'b', '2'}, {'c', '2'},
    {'d', '3'}, {'e', '3'}, {'f', '3'},
    {'g', '4'}, {'h', '4'}, {'i', '4'},
    {'j', '5'}, {'k', '5'}, {'l', '5'},
    {'m', '6'}, {'n', '6'}, {'o', '6'},
    {'p', '7'}, {'q', '7'}, {'r', '7'}, {'s', '7'},
    {'t', '8'}, {'u', '8'}, {'v', '8'},
    {'w', '9'}, {'x', '9'}, {'y', '9'}, {'z', '9'}
};

vector<string> dict;
vector<int> dp, pos;
int INF = 1e9;

bool starts_with(string s, string prefix) {
    if(s.length() < prefix.length()) {
        return false;
    }
    for(int i=0; i<prefix.length(); i++) {
        if(s[i] != prefix[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string line, num_str;

    while(cin >> num_str) {
        dict.push_back(num_str);
    }

    while(cin >> line) {
        // Convert the input line to a number string
        num_str = "";
        for(char c : line) {
            if(isalpha(c)) {
                num_str += char_to_num[tolower(c)];
            }
        }

        // Initialize DP arrays
        dp.assign(num_str.length() + 1, INF);
        pos.assign(num_str.length() + 1, -1);
        dp[0] = 0;

        // Solve the DP problem
        for(int i=0; i<num_str.length(); i++) {
            for(string word : dict) {
                if(starts_with(num_str.substr(i), word)) {
                    int j = i + word.length();
                    if(dp[i] + 1 < dp[j]) {
                        dp[j] = dp[i] + 1;
                        pos[j] = i;
                    }
                }
            }
        }

        // If there is no solution, output "No solution."
        if(dp[num_str.length()] == INF) {
            cout << "No solution." << endl;
        }
        // Otherwise, output the solution
        else {
            int i = num_str.length();
            string sol = "";
            while(i > 0) {
                int j = pos[i];
                sol = " " + num_str.substr(j, i-j) + sol;
                i = j;
            }
            cout << sol.substr(1) << endl;
        }
    }

    return 0;
}
