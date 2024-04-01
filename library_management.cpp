#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Book {
public:
    string title;
    string author;
    string isbn;
    int num_copies;
    int num_available_copies;

    Book(string title, string author, string isbn, int num_copies) {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
        this->num_copies = num_copies;
        this->num_available_copies = num_copies;
    }

    void print_details() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Total Copies: " << num_copies << endl;
        cout << "Available Copies: " << num_available_copies << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void add_book(Book book) {
        books.push_back(book);
        cout << "Book added successfully." << endl;
    }

    void remove_book(Book book) {
        for (vector<Book>::iterator it = books.begin(); it != books.end(); it++) {
            if (it->isbn == book.isbn) {
                // Found the book, remove it from the library
                books.erase(it);
                cout << "Book removed successfully." << endl;
                return;
            }
        }
        cout << "Sorry, the book was not found in the library." << endl;
    }

    void borrow_book(Book book) {
        for (vector<Book>::iterator it = books.begin(); it != books.end(); it++) {
            if (it->isbn == book.isbn) {
                // Found the book, check if it is available for borrowing
                if (it->num_available_copies > 0) {
                    it->num_available_copies--;
                    cout << "Book borrowed successfully." << endl;
                } else {
                    cout << "Sorry, this book is not available for borrowing." << endl;
                }
                return;
            }
        }
        cout << "Sorry, the book was not found in the library." << endl;
    }

    void return_book(Book book) {
        for (vector<Book>::iterator it = books.begin(); it != books.end(); it++) {
            if (it->isbn == book.isbn) {
                // Found the book, return it to the library
                it->num_available_copies++;
                cout << "Book returned successfully." << endl;
                return;
            }
        }
        cout << "Sorry, the book was not found in the library." << endl;
    }

    void print_books() {
        cout << "Library Inventory:" << endl;
        for (vector<Book>::iterator it = books.begin(); it != books.end(); it++) {
            it->print_details();
            cout << endl;
        }
    }
};

int main() {
    Library library;
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", "9780743273565", 3);
    Book book2("To Kill a Mockingbird", "Harper Lee", "9780446310789", 2);

    library.add_book(book1);
    library.add_book(book2);
    library.print_books();

    Book book3("The Catcher in the Rye", "J.D. Salinger", "9780316769174", 1);
    library.add_book(book3);
    library.print_books();

    library.borrow_book(book1);
    library.print_books();

    library.return_book(book1);
}
