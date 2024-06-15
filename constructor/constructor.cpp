#include<iostream>
using namespace std;

class book{
  public:
    string title;
    string author;
    int pages;
    
    book(string aTitle, string aAuthor, int Pages){
      title = aTitle;
      author =aAuthor;
      pages = Pages;
    }
};

int main(){
  book book1("harry potter","JK Rowling",500);
  book book2("Lord of the Rings","Tolkein",700);
  return 0;
}
