#include <iostream>

using namespace std;

int main() {
    long n, sum, count, avg, sum2;
    sum = 0;
    sum2 = 0;
    avg = 0;
    count = 0;
    cin >> n;
    int m[n];

    for (int i = 0; i < n; i++) {
        cin >> m[i];
        sum += m[i];

    }
    avg = sum / n;

    for (int i = 0; i < n; i++) {
        count = abs(m[i] - avg);
        sum2 += count;
    }

    sum2 = sum2 / 2;
    cout << sum2;
    
}