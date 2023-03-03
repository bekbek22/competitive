#include <iostream>

using namespace std;

int main() {
    long n, m;
    cin >> n;
    long number[n];

    for (int i = 0; i < n; i++) {
        cin >> number[i];
    }

    cin >> m;
    long answer[m], result[n][n], output[m];

    for (int i = 0; i < m; i++) {
        cin >> answer[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                result[i][j] = 0;
                result[i][j] = number[i] + number[j];
            } else {
                result[i][j] = 0;
            }
            
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; i < n; i++) {
            output[i] = result[i][j] - answer[i];
            if () {

            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}