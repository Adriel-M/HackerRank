#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int maxStreak = 0;
    int currStreak = 0;

    while (n) {
        if (n % 2) {
            currStreak++;
            if (currStreak > maxStreak) {
                maxStreak = currStreak;
            }
        } else {
            currStreak = 0;
        }
        n >>= 1;
    }

    cout << maxStreak << endl;
    return 0;
}
