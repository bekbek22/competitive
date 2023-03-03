#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int start, end;
    int n = 0;

    cin >> start;
    cin >> end;

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            n++;
        }
    }

    cout << n;

}