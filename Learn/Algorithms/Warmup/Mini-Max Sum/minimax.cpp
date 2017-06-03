#include <iostream>
#include <limits>

using namespace std;

int main() {
    int minValue = numeric_limits<int>::max();
    int maxValue = numeric_limits<int>::min();
    long int sum = 0;

    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        sum += n;
        if (n < minValue) {
            minValue = n;
        }
        if (n > maxValue) {
            maxValue = n;
        }
    }

    cout << sum - maxValue << " " << sum - minValue << endl;

    return 0;
}
