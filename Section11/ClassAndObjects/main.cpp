#include <iostream>
using namespace std;

class Book {
    public:
            string author;
            string title;
            int pages;
            
            Book () {
                title = "\n\nno title";
                author = "\nno author\n";
                pages = 0;
            }
            
            Book(string aTitle, string aAuthor , int aPages){
                title = aTitle;
                author = aAuthor;
                pages = aPages;
            }
};

int main() {
    
    Book book1 ("\nHet Kothari\n","Success On My Mind", 800);
    
    
/*    book1.author="\nHet Kothari\n",;
    book1.title="Success On My Mind";
    book1.pages=;
    */
    
    Book book2("\nJ.K Rolins\n","Game of Thrones" , 9000);
    
    Book book3;
    
  /*  book2.author="\nBlah Blah\n";
    book2.title="\n\nNothing";
    book2.pages=90;*/
    
    cout << book1.title;
    cout <<book1.author;
    cout <<book1.pages;
    cout <<book2.title;
    cout <<book2.author;
    cout <<book2.pages;
    cout <<book3.title;
    cout <<book3.author;
    cout << book3.pages;
    cout <<"\n\n\n";
    
    return 0;
}