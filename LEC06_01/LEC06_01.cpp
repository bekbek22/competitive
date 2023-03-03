#include <iostream>

using namespace std;

int main() {
    int n, min, sum1, sum2, all;
    min = 999999;
    cin >> n;
    
    int numbers[n], cost[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            sum1 = numbers[0] + numbers[1];
            cost[i] = sum1;
        } else {
            sum1 = cost[i-1]  + numbers[i + 1];
            cost[i] = sum1;
        }
    }

    cout << cost[0] << " " << cost[1] << " " << cost[2] << " " << cost[3];
}

