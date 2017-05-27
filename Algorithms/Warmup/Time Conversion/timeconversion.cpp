#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;
int main() {
    int hours;
    int minutes;
    int seconds;
    char limit;
    string section;

    string t;
    cin >> t;
    istringstream asStream(t);

    asStream >> hours >> limit >> minutes >> limit >> seconds >> section;

    if (section == "PM" && hours != 12) {
        hours += 12;
    } else if (section == "AM" && hours == 12) {
        hours = 0;
    }

    cout << setfill('0') << setw(2) << hours << ":";
    cout << setfill('0') << setw(2) << minutes << ":";
    cout << setfill('0') << setw(2) << seconds << endl;

    return 0;
}
