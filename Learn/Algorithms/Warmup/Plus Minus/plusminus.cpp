#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main() {
    int n;
    cin >> n;

    float pos = 0.0;
    float neg = 0.0;
    float zero = 0.0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t == 0) {
            zero++;
        } else if (t > 0) {
            pos++;
        } else {
            neg++;
        }
    }

    vector<float> counts = {pos, neg, zero};
    for (float i : counts) {
        cout << setprecision(6) << i / n << endl;
    }

    return 0;
}
