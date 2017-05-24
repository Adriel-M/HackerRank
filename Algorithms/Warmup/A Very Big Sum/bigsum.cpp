#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long int sum = 0;
    for (int i = 0; i < n; i++) {
        long int t;
        cin >> t;
        sum += t;
    }

    cout << sum << endl;
    return 0;
}
