#include <iostream>
#include <string>
#include <vector>

// ---------------
// Class members
//---------------

class book
{
    unsigned int id;
    std::string title;
    std::string author;
    std::string publisher;
    int quantity;
public:
    void add();
    void display();
};

// -----------------
// Global Variables
// -----------------

std::vector<book> books;



void book::add()
{
    std::cout << "Enter unique id for the book: ";
    getline(std::cin, id);
    std::cout << "Enter the title of the book: ";
    getline(std::cin, title);
    std::cout << "Enter the author of the book: ";
    getline(std::cin, author);
    std::cout << "Enter the publisher of the book: ";
    getline(std::cin, publisher);
    quantity = 1;
    std::cout << std::endl << std::endl << "Book Recorded Successfully" << std::endl << std::endl;
}

void book::display()
{
    for(auto b: books)
    {
        std::cout << "Name of book: " << b.title << std::endl;
        std::cout << "Name of author: " << b.author << std::endl;
        std::cout << "Quantity available: " << b.quantity << std::endl;
        std::cout << std::endl << std::endl << std::endl;
    }
}


// -------------------
// FUNCTIONS
// -------------------
void book_menu();

void main_menu()
{
    int c;
    std::cout << "********************************************************" << std::endl;
    std::cout << "              BOOKSHOP MANAGEMENT SYSTEM" << std::endl;
    std::cout << "********************************************************" << std::endl;
    std::cout << "      1.  BOOKS" << std::endl;
    std::cout << "      2.  EXIT" << std::endl << std::endl << std::endl;
    std::cout << "Enter your choice" << std::endl;
    std::cin >> c;
    switch (c)
    {
    case 1:
        book_menu();
        break;
    case 2:
        exit(1);
        break;
    default:
        std::cout << "Wrong Input" << std::endl << std::endl << "Invalid Input";
        break;
    }
    return;
}

void book_menu()
{
    int c;
    book b;
    std::cout << "***********************************************" << std::endl;
    std::cout << "              BOOK MENU" << std::endl;
    std::cout << "***********************************************" << std::endl;
    std::cout << "      1.  ADD" << std::endl;
    std::cout << "      2.  DISPLAY" << std::endl;
    std::cout << "      3.  BUY BOOKS" << std::endl << std::endl << std::endl;
    std::cin >> c;
    switch (c)
    {
    case 1:
        b.add();
        books.push_back(b);
        break;
    case 2:
        b.display();
        break;
    default:
        std::cout << "Wrong Input" << std::endl << std::endl << "Invalid Input";
        break;
    }
}

int main() 
{
    while(1)
    {
        main_menu();
    }
    return 0;
}