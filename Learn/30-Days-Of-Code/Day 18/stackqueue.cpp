#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    private:
        stack<char> s;
        queue<char> q;
    public:
        void pushCharacter(char ch) {
            s.push(ch);
        }
        void enqueueCharacter(char ch) {
            q.push(ch);
        }
        char popCharacter() {
            char t = s.top();
            s.pop();
            return t;
        }
        char dequeueCharacter() {
            char t = q.front();
            q.pop();
            return t;
        }
};

int main() {
    string s;
    getline(cin, s);

    Solution obj;

    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }
    cout << "The word, " << s;
    if (isPalindrome) {
        cout << ", is a palindrome." << endl;
    } else {
        cout << ", is not a palindrome." << endl;
    }

    return 0;
}
