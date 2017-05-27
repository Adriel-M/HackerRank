#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int max_value = 0;
    int max_count = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t > max_value) {
            max_value = t;
            max_count = 1;
        } else if (t == max_value) {
            max_count++;
        }
    }

    cout << max_count << endl;

    return 0;
}
