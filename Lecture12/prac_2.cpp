#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book{
    private:
        string title,author;
        int stock;
    public:
        Book(const string& t,const string& a, int s)
        : title(t),author(a),stock(s)
        {} 

        string get_title() const 
        {
            return title;
        }
        string get_author() const 
        {
            return author;
        }
        int get_stock() const 
        {
            return stock;
        }

        void borrowCopy()
        {
            if (stock>0)
            {
                stock--;
            }
            else
            {
               throw runtime_error("Out of stock"); 
            }
        }
        
};

bool processLoan( vector<Book>& library, string book_name)
{
    for (auto& item: library)
    {
        if (item.get_title()==book_name)
        {
            try{
                item.borrowCopy();
                return true;
            } catch (const runtime_error& e)
            {
                std::cout << "Error borrowing '" << item.get_title() << "': " << e.what() << "\n";
                return false;
            }

        }
    }

    cout<<"book not found"<<endl;
    return false;
}

void printInventory(const vector<Book>& library)
{
    for (const auto& item:library)
    {
        cout<<"Title: "<<item.get_title()<< "| Copies: "<<item.get_stock()<<endl;
    }
}

int main()
{
    vector<Book> library;
    library.emplace_back("The Great Gatsby", "F. Scott Fitzgerald", 2);
    library.emplace_back("1984", "George Orwell", 0);

    processLoan(library, "The Great Gatsby");
    processLoan(library, "1984");
    printInventory(library);
}
