#include <iostream>
#include <vector>

using namespace std;

class bookType {
    private:
        string title, publisher;
        vector<string> author;
        int price, copies;
        static vector<bookType> b;

    public:
        bookType() {}

        bookType(string Title, string Publisher, vector<string> Author, int Price, int Copies) {
            setTitle(Title);
            setPublisher(Publisher);
            setAuthor(Author);
            setPrice(Price);
            setCopies(Copies);
        }

        void setObject(bookType* B) {
            b.push_back(*B);
        }

        void setTitle(string Title) {
            title = Title;
        }

        string getTitle() {
            return title;
        }

        void setPublisher(string Publisher) {
            publisher = Publisher;
        }

        string getPublisher() {
            return publisher;
        }

        void setAuthor(vector<string> Author) {
            author = Author;
        }

        vector<string> getAuthor() {
            return author;
        }

        void setPrice(int Price) {
            price = Price;
        }

        void printPrice() {
            cout << "Price of " << title << " is " << price << endl;
        }

        int getPrice() {
            return price;
        }

        void setCopies(int Copies) {
            copies = Copies;
        }

        void printCopies() {
            cout << "Number of copies: " << copies << endl;
        }

        int getCopies() {
            return copies;
        }

        void displayInformation() {
            cout << "Title of a book is " << title << endl;
            cout << "Publisher of a book is " << publisher << endl;
            cout << "Authors of book are ";
            for (int i = 0; i < author.size(); i++) {
                cout << author[i] << ", ";
            }
            cout << "\nPrice of a book is " << price << endl;
            cout << "Copies of a book are " << copies << endl << endl;
        }

        void printInformation(int i) {
            cout << "Title of a book is " << b[i].getTitle() << endl;
            cout << "Publisher of a book is " << b[i].getPublisher() << endl;
            cout << "Authors of book are ";
            for (int i = 0; i < b[i].getAuthor().size(); i++) {
                cout << b[i].getAuthor()[i] << ", ";
            }
            cout << "\nPrice of a book is " << b[i].getPrice() << endl;
            cout << "Copies of a book are " << b[i].getCopies() << endl;
        }

        void search() {
            string t;

            cout << "Search book by book title: ";
            cin >> t;

            for (int i = 0; i < b.size(); i++) {
                if (t == b[i].getTitle()) {
                    system("cls");
                    b[i].printInformation(i);
                }
            }
        }

};

vector<bookType> bookType::b;

int main(){
    bookType books[100];

    vector<string> author = { "Wali", "Yar", "Khan" };

    books[0] = bookType("Harry-Potter", "J.K.Rowling", author, 500, 240);
    books[1] = bookType("The-100", "Kass Morgan", author, 1200, 755);

    books[0].setObject(&books[0]);
    books[1].setObject(&books[1]);

    books[0].displayInformation();
    books[1].displayInformation();

    books[2].search();
}