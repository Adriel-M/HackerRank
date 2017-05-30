#include <iostream>

using namespace std;

// Given
class Book {
    protected:
        string title;
        string author;
    public:
        Book(string t, string a) {
            title = t;
            author = a;
        }
        virtual void display() = 0;
};

// Start
class MyBook : public Book {
    private:
        int price;
    public:
        MyBook(string t, string a, int p) : Book(t, a) {
            price = p;
        }

        void display() {
            cout << "Title: " << this->title << endl;
            cout << "Author: " << this->author << endl;
            cout << "Price: " << this->price << endl;
        }
};

// Given
int main() {
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
