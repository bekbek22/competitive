#include "testlib.h"
#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int convertToNumber(string word) {

    map<char, string> letter_to_number = {
        {'I', "1"}, {'J', "1"},
        {'A', "2"}, {'B', "2"}, {'C', "2"},
        {'D', "3"}, {'E', "3"}, {'F', "3"},
        {'G', "4"}, {'H', "4"},
        {'K', "5"}, {'L', "5"},
        {'M', "6"}, {'N', "6"},
        {'P', "7"}, {'R', "7"}, {'S', "7"},
        {'T', "8"}, {'U', "8"}, {'V', "8"},
        {'W', "9"}, {'X', "9"}, {'Y', "9"},
        {'O', "0"}, {'Q', "0"}, {'Z', "0"}
    };

    string phone_number = "";
    int hello_int = 0;
    int count = 0;

    for (char c : word) {
        // Convert to uppercase and look up the number for the character
        char upper_c = toupper(c);
        if (letter_to_number.count(upper_c)) {
            phone_number += letter_to_number[upper_c];
        }
        else if (c == ' ') {
            phone_number += " ";
        }
        else {
            // Character is not a letter or a space
            cout << "Error!" << endl;
            
        }
        
        count++;

        if(count > 10) {
            return -1;

        }
    }

    if (phone_number != "") {

        hello_int = stoi(phone_number);
        
    }
    
    return hello_int;
}

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    
    string ans = inf.readToken("[0-9]{1,10}", "x");
    int n = inf.readInt();

    vector<string> s1;
    int checker = 0;
    string str;

    for (int i = 0; i < n; i++) {
        string word = inf.readWord();
        int dataint = convertToNumber(word);

        if (dataint == stoi(ans)) {
            checker++;
            s1.push_back(word);
            str = word;
        }
    }

    std::sort(s1.begin(), s1.end());
    
    if (checker > 0) {
        for (int i = 0; i < checker; i++) {
            string word = ouf.readWord();
            if (word != s1[i]) {
                quitf(_wa, "Expected '%s', but got '%s'", s1[i].c_str(), word.c_str());
            }
        }
        if (!ouf.seekEof()) {
            quitf(_wa, "No");
        }
    } else {
        if (!ouf.seekEof()) {
            quitf(_wa, "No");
        }
        quitf(_wa, "No");
    }

    quitf(_ok, "%d found", checker);
}
