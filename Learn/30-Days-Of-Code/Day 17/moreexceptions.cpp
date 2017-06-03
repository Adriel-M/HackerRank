#include <iostream>
#include <exception>
#include <cmath>

using namespace std;

class Calculator {
    public:
        int power(int n, int p) {
            if (n < 0 || p < 0) {
                throw runtime_error("n and p should be non-negative");
            }
            return pow(n, p);
        }
};

int main() {
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n >> p;
        try {
            int ans = myCalculator.power(n, p);
            cout << ans << endl;
        } catch (exception &e) {
            cout << e.what() << endl;
        }
    }
    return 0;
}
