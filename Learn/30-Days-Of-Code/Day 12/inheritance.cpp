#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Given
class Person {
    protected:
        string firstName;
        string lastName;
        int id;
    public:
        Person(string firstName, string lastName, int identification) {
            this->firstName = firstName;
            this->lastName = lastName;
            this->id = identification;
        }

        void printPerson() {
            cout << "Name: " << lastName << ", " << firstName << endl;
            cout << "ID: " << id << endl;
        }
};

// Start
class Student : public Person {
    private:
        vector<int> testScores;
    public:
        Student(string firstName, string lastName, int identification, vector<int> scores) :
            Person(firstName, lastName, identification) {
            this->testScores = scores;
        }

        char calculate() {
            float average =
                accumulate(testScores.begin(), testScores.end(), 0.0) / testScores.size();
            if (average >= 90) {
                return 'O';
            } else if (average >= 80) {
                return 'E';
            } else if (average >= 70) {
                return 'A';
            } else if (average >= 55) {
                return 'P';
            } else if (average >= 40) {
                return 'D';
            } else {
                return 'T';
            }
        }
};

// Given
int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student *s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << endl;
    return 0;
}
