
#include <iostream>
using namespace std;

void printRepeat(char c, int times) {
    for (int i = 0; i < times; i++) {
        cout << c;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    int extra = k - n;
    int z = extra / 25;
    int remainder = extra % 25;

    int a = n - z;

    if (remainder > 0) {
        a--;
    }

    printRepeat('a', a);

    if (remainder > 0) {
        cout << char('a' + remainder);
    }

    printRepeat('z', z);

    return 0;
}
