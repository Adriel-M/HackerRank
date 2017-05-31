#include <iostream>
#include <vector>

using namespace std;

class Difference {
    private:
        vector<int> elements;

    public:
        int maximumDifference;
        // start
        Difference(vector<int> e) {
            elements = e;
        }

        void computeDifference() {
            int minVal = elements[0];
            int maxVal = elements[0];
            for (int i = 0; i < elements.size(); i++) {
                if (elements[i] < minVal) {
                    minVal = elements[i];
                }
                if (elements[i] > maxVal) {
                    maxVal = elements[i];
                }
            }
            maximumDifference = maxVal - minVal;
        }
};
// end

int main() {
    int N;
    cin >> N;

    vector<int> a;
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);
    d.computeDifference();
    cout << d.maximumDifference << endl;

    return 0;
}
