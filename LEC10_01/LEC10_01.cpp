#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z, a, b, c, check=0;
    scanf("%d %d %d", &a, &b, &c);
    for(x=-c; x<a/2; x++){
        for(y=x+1; y<1000; y++) {
            z = a-x-y;
            if(std::pow(x, 2) + std::pow(y, 2) + std::pow(z, 2) == c && x*y*z == b) {
                check=1;
                break;
            }
        }
        if(std::pow(x, 2) + std::pow(y, 2) + std::pow(z, 2) == c && x*y*z == b) {
                break;
        }
    }

    if(check==0) {
        printf("No solution.");
    } else {
        printf("%d %d %d", x, y, z);
    }

    return 0;
}