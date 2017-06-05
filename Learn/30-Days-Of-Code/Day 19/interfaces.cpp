#include <iostream>

using namespace std;

class AdvancedArithmetic {
    public:
        virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic {
    public:
        int divisorSum(int n) {
            int s = n > 1 ? n + 1 : 1;
            for (int i = 2; i < ((n / 2) + 1); i++) {
                if (n % i == 0) {
                    s += i;
                }
            }
            return s;
        }
};

int main() {
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic" << endl;
    cout << sum << endl;

    return 0;
}
