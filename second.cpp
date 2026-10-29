
#include <iostream>
using namespace std;

bool hasAlternatingBits(int n) {
    int previous = n % 2;
    n /= 2;

    while (n > 0) {
        int current = n % 2;

        if (current == previous) {
            return false;
        }

        previous = current;
        n /= 2;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    if (hasAlternatingBits(n)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
