#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, printer = 1, day = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (n == 1) {
            break;
        }
        printer *= 2;

        if (printer < n) {
            day++;
        } else if (printer >= n) {
            day++;
            break;
        }
    }

    cout << day;

    return 0;

}