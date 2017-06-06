#include <iostream>
#include <vector>

using namespace std;

void swap(vector<int> *arr, int posI, int posJ) {
    int t = (*arr)[posI];
    (*arr)[posI] = (*arr)[posJ];
    (*arr)[posJ] = t;
}

void bubbleSort(vector<int> *arr, int *numSwaps) {
    int swaps = 0;
    for (int i = 0; i < (*arr).size(); i++) {
        int curr_swaps = 0;
        for (int j = 0; j < (*arr).size() - 1; j++) {
            if ((*arr)[j] > (*arr)[j + 1]) {
                swap(arr, j, j + 1);
                curr_swaps++;
            }
        }
        swaps += curr_swaps;
        if (!curr_swaps) {
            break;
        }
    }
    *numSwaps = swaps;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int swaps;
    bubbleSort(&a, &swaps);
    cout << "Array is sorted in " << swaps << " swaps." << endl;
    cout << "First Element: " << a.front() << endl;
    cout << "Last Element: " << a.back() << endl;

    return 0;

}
