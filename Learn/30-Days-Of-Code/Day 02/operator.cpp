#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double mealCost;
    int tip;
    int tax;

    cin >> mealCost;
    cin >> tip;
    cin >> tax;

    double tipTotal = mealCost * (tip / 100.0);
    double taxTotal = mealCost * (tax / 100.0);

    int total = round(mealCost + tipTotal + taxTotal);

    cout << "The total meal cost is " << total << " dollars." << endl;
}
