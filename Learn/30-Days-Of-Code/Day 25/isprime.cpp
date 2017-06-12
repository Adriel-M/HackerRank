#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    } else if (n <= 3) {
        return true;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int T, n;
    cin >> T;
    while (T-- > 0) {
        cin >> n;
        if (isPrime(n)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }

    return 0;
}
