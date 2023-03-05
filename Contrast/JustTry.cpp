#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int strToInt(string str) {
    int num = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-') {
        sign = -1;
        i++;
    }
    for (; i < str.length(); i++) {
        num = num * 10 + (str[i] - '0');
    }
    return num * sign;
}

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
    long hello_int = 0;
    int count = 0;

    for (char c : word) {
        // Convert to uppercase and look up the number for the character
        char upper_c = toupper(c);

        if (letter_to_number.count(upper_c)) {
            phone_number += letter_to_number[upper_c];
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

        hello_int = strToInt(phone_number);
        
    }

    return hello_int;
}

int main() {
    
    vector<string> s1;
    string str;
    int checker = 0, result = 0;
    string ans;
    cin >> ans;

    result = strToInt(ans);

    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        int dataint = convertToNumber(word);

        if (dataint == result) {
            checker++;
            s1.push_back(word);
        }

    }

    std::sort(s1.begin(), s1.end());
    
    if (checker > 0) {
        for (int i = 0; i < checker; i++) {
            cout << s1[i] << endl;
        }
    } else {
        cout << "No";
    }

    return 0;
}   