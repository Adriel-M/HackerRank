#include <iostream>

using namespace std;

int fineCost(int returnDay, int returnMonth, int returnYear,
             int dueDay, int dueMonth, int dueYear) {
    if ((returnYear < dueYear) | (returnYear <= dueYear
            && returnMonth <= dueMonth \
            && returnDay <= dueDay)) {
        return 0;
    } else if (returnYear == dueYear && returnMonth == dueMonth) {
        return 15 * (returnDay - dueDay);
    } else if (returnYear == dueYear) {
        return 500 * (returnMonth - dueMonth);
    } else {
        return 10000;
    }
}
int main() {
    int rD, rM, rY;
    int dD, dM, dY;
    cin >> rD >> rM >> rY;
    cin >> dD >> dM >> dY;
    cout << fineCost(rD, rM, rY, dD, dM, dY) << endl;
    return 0;
}
