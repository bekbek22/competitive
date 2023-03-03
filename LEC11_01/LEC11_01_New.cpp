#include <iostream>

using namespace std;

int main() {
    long n, x, minVal;
    cin >> n;
    long sum[n];

    while (n--) {
        cin >> x;
        minVal = abs(sum[0] - x);
        for (auto c : sum) {
            if (minVal > abs(c - x)) {
                minVal = abs(c - x);
            }
        }
        cout << minVal << endl;
    }
    
    // for (int i = 0; i < k; i++) {
    //     for (int j = 0; j < k; j++) {
    //         if (output[i] >= answer[n]) {
    //             output[i] = answer[n];
    //         }
    //     }
    // }

    // for (int  i = 0; i < k; i++) {
    //     cout << output[i] << endl;
    // }
}