#include <iostream>

using namespace std;

int main () {
    long long HP, n;
    cin >> HP;
    cin >> n;
    long long hit[n], damage = 0, i = 0, count = 1;

    for (int i = 0; i < n; i++) {
        cin >> hit[i];
    }

    while (true) {
        damage += hit[i];
        if (damage < HP) {
            count++;
            i++;
        } else if (damage > HP) {
            count = 1;
            i = 0;
        } else {
            break;
        }
    }

    cout << count;
}