#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int j = 0; j < n; j++) {
        sum += arr[j];
    }

    cout << sum << endl;

    return 0;
}
