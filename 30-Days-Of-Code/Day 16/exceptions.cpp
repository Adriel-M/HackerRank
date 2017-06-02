#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    try {
        int n = stoi(S, nullptr, 10);
        cout << n << endl;
    } catch (const invalid_argument &ia) {
        cout << "Bad String" << endl;
    }
    return 0;
}
