#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++) {
        string evens = "";
        string odds = "";
        string word;
        cin >> word;
        for (int j = 0; j < word.length(); j++) {
            if (j % 2 == 0) {
                evens += word[j];
            } else {
                odds += word[j];
            }
        }
        cout << evens << " " << odds << endl;
    }

    return 0;
}
