#include <iostream>
using namespace std;

long long power(int base, int exp) {
    long long result = 1;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}

int integerBreak(int n) {
    if (n == 2) return 1;
    if (n == 3) return 2;

    int count = n / 3;
    int remainder = n % 3;

    switch (remainder) {
        case 0:
            return power(3, count);

        case 1:
            return power(3, count - 1) * 4;

        case 2:
            return power(3, count) * 2;
    }

    return 0;
}

int main() {
    int n;
    cin >> n;

    cout << integerBreak(n);

    return 0;
}
