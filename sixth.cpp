#include <iostream>
using namespace std;

int minOperations(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else if (n == 1 || n % 4 == 1) {
            n--;
            count++;
        }
        else {
            n++;
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    cout << minOperations(n);

    return 0;
}
