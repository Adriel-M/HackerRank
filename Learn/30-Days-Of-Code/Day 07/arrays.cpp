#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = n - 1; i > -1; i--) {
        cin >> v[i];
    }

    for (int j : v) {
        cout << j << " ";
    }
    cout << endl;
    return 0;
}
