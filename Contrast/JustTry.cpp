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
    }

    if (phone_number != "") {
        
        hello_int = stoi(phone_number);
        
    }

    return hello_int;
}

int main() {
    
    vector<string> s1;
    string str;
    int checker = 0;
    string ans;
    cin >> ans;

    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

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
            cout << s1[i] << endl;
        }
    } else {
        cout << "No Word.";
    }

    return 0;
}   

    // a = 97 b = 98
    // cin >> testcase[0];
    // cin >> testcase[1];
    // cin >> testcase[2];
    // cin >> testcase[3];
    // cin >> testcase[4];

    // cout << "\nsize " << ans.size();
    // cout << "\nfront " << ans.front();
    // cout << "\nback " << ans.back();
    // ans.pop();
    // cout << "\nfront after pop " << ans.front();   

// 1 ij    2 abc   3 def
// 4 gh    5 kl    6 mn
// 7 prs   8 tuv   9 wxy
//         0 oqz

// 1. รับ input แล้วเอาคำตอบเก็บเป็น string
// 2. นำ Input ที่ได้แปลงเป็นตัวเลข
// 3. ใช้เรื่อง queue ในการเปรียบเทียบ หรือ นั่งเปรียบเทียบทีละตัวเลย
// 3.1 ถ้าใช้เรื่อง queue นำ answer มาใส่ใน queue เสร็จแล้วนำคำตอบมาเปรียบเทียบแล้ว
// ถอด queue ทีละตัวจนกว่าคำตอบมันจะหมดถ้าเกิด queue หมดก่อนก็ เสร็จ ถ้าเกิด
// queue เหลือเราก็ cout << "No Solution."

// testcase
// 7325189
// 5
// it 18
// your 9087
// reality ลองแปลงเป็นตัวเลข 7325189
// real 7325
// our 087
// 4294967296
// 5
// it 18
// your 9087
// reality 7325189
// real 7325
// our 087
// -1
// worth case
// 7325189087
// 3
// reality 
// our
// qus ถ้าไม่อยากเจอ case นี้ให้ใส่ว่าถามให้ตัวเลขซ้ำกัน แต่มันยากมาก ??

// reality our
// No solution.