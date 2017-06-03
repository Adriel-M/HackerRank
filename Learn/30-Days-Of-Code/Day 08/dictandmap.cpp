#include <iostream>
#include <map>

using namespace std;

int main() {
    // Number of entries
    int n;
    cin >> n;

    map<string, string> phoneNumbers;

    // Populate
    for (int i = 0; i < n; i++) {
        string name;
        string number;
        cin >> name;
        cin >> number;
        phoneNumbers[name] = number;
    }

    string query;

    // flush cin
    cin.ignore();
    while (getline(cin, query)) {
        // if no entry
        if (query == "") {
            break;
        }
        // if not found
        else if (phoneNumbers.find(query) == phoneNumbers.end()) {
            cout << "Not found" << endl;
        } else {
            cout << query << "=" << phoneNumbers[query] << endl;
        }
    }

    return 0;
}
