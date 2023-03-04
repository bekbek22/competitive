#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main() {
    queue<char> ans;
    string s;
    long long n;
    
    //input ans
    cin >> s;
    
    //convert ans to queue
    for (int i = 0; i < s.length(); i++) {
        ans.push(s[i]);
    }
    
    //input num
    cin >> n;
    string testcase;
    int num[n];

    //input your testcase
    for (int i = 0; i < n; i++) {
        cin >> testcase;
        
        for () {

        }
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

}

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
// 7325189087
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
