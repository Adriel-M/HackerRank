#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// https://stackoverflow.com/a/20446239
bool hasSuffix(const string &str, const string &suffix) {
    return str.size() >= suffix.size() &&
        str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
}

int main() {
    int N;
    cin >> N;
    vector<string> names(N);
    int c = 0;
    while (N-- > 0) {
        string name;
        string email;
        cin >> name >> email;
        if (hasSuffix(email, "@gmail.com")) {
            names[c] = name;
            c++;
        }
    }
    sort(names.begin(), names.begin() + c);
    for (int i = 0; i < c; i++) {
        cout << names[i] << endl;
    }
    return 0;
}
