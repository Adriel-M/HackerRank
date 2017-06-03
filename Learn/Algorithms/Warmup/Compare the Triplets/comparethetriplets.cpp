#include <iostream>

using namespace std;
int main() {
    int scores[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> scores[i][j];
        }
    }

    int alice = 0;
    int bob = 0;
    for (int i = 0; i < 3; i++) {
        if (scores[0][i] == scores[1][i]) {
            continue;
        } else if (scores[0][i] > scores[1][i]) {
            alice++;
        } else {
            bob++;
        }
    }

    cout << alice << " " << bob << endl;

    return 0;
}
