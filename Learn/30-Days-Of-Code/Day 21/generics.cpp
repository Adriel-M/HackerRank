#include <iostream>
#include <vector>

using namespace std;

template <class T>
void printArray(vector<T> vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

int main() {
    int n;

    cin >> n;
    vector<int> int_vector(n);
    for (int i = 0; i < n; i++) {
        cin >> int_vector[i];
    }

    cin >> n;
    vector<string> string_vector(n);
    for (int i = 0; i < n; i++) {
        cin >> string_vector[i];
    }

    printArray<int>(int_vector);
    printArray<string>(string_vector);

    return 0;
}

