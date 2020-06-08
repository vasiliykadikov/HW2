#include "Book.h"
#include "Library.h"
#include <iostream>
#include <string>
#include <list>

int main() {
    Book q;
    q.Name = "Sbornik";
    q.Author = "Pushkin";
    q.Pages = 220;
    q.Year = 1911;
  
    Book qq ("Dochka", "Pushkin", 70, 1810);
   
    Book qqq;
    qqq.Name = "ViM";
    qqq.Author = "Tolstoy";
    qqq.Pages = 10000000;
    qqq.Year = 1950;
    Book qqqq;
    qqqq.Name = "MiM";
    qqqq.Author = "Bulgakov";
    qqqq.Pages = 250;
    qqqq.Year = 1960;

    q.ChangeName("EO");
    std::cout << q << std::endl;

    std::string a1, a2;
    a1 = q.getname();
    a2 = qq.getname();
    q.Name = a2;
    qq.Name = a1;
    std::cout << qq << std::endl;

    Library L("library_one", 10, 100);
    Library LL("library_two", 20, 130);
    L.AddBookInLibrary(q);
    L.AddBookInLibrary(qq);
    L.AddBookInLibrary(qqq);
    L.AddBookInLibrary(qqq);
    L.AddBookInLibrary(qqqq);
    std::cout << L << std::endl;

    LL.AddBookInLibrary(q);
    LL.AddBookInLibrary(qq);
    LL.AddBookInLibrary(qqq);
    LL + qqqq;
    std::cout << LL << std::endl;

    L.DeleteBookFromLibrary("ViM");
    std::cout << L << std::endl;

    LL.DeleteAuthorFromLibrary("Pushkin");
    LL.DeleteAuthorFromLibrary("Pushkin");
    std::cout << LL << std::endl;
    
    
    system("pause");
    return 0;    
}