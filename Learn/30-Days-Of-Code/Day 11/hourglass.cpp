#include <iostream>
#include <vector>

using namespace std;

int get_sum(vector< vector<int> > arr, int x, int y) {
    int sum = 0;
    // top section
    for(int i = 0; i < 3; i++) {
        sum += arr[y][x + i];
    }
    sum += arr[y + 1][x + 1];
    for (int i = 0; i < 3; i++) {
        sum += arr[y + 2][x + i];
    }
    return sum;
}

int main() {
    vector< vector<int> > arr(6,vector<int>(6));
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }

    int curr = 0;
    int max_sum = -46;
    int max_x;
    int max_y;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int hsum = get_sum(arr, j, i);
            if (hsum > max_sum) {
                max_sum = hsum;
                max_x = j;
                max_y = i;
            }
        }
    }

    cout << max_sum << endl;

    return 0;

}

