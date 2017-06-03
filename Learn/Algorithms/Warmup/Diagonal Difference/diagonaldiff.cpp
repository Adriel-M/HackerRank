#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n;

    vector< vector<int> > a(n,vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int first = 0;
    int second = 0;

    for (int i =0; i < n; i++) {
        first += a[i][i];
        second += a[i][(n - 1) - i];
    }

    int diff = first - second;

    if (diff < 0) {
        diff *= -1;
    }

    cout << diff << endl;

    return 0;

}
