#include <iostream>

using namespace std;

int maxValue(int n, int k) {
    return ((k - 1) | k) <= n ? k - 1 : k - 2;
}

int main() {
    int t, n, k;
    cin >> t;
    while (t-- > 0) {
        cin >> n >> k;
        cout << maxValue(n, k) << endl;
    }
    return 0;
}
