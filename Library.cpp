#include "Library.h"

Library::~Library(){
};

Library::Library() {
    NameOfLibrary = "";
    Cases = 0;
    Places = 0;
    Books.empty();
};

Library::Library(const std::string& NameOfLibrary, int Cases, int Places) {
    this->NameOfLibrary = NameOfLibrary;
    this->Cases = Cases;
    this->Places = Places;
    this->Books.empty();
};

void Library::AddBookInLibrary(Book& book) {
    (*this).Books.push_back(book);
};

void Library::DeleteBookFromLibrary(const std::string name) {
    for (auto it = Books.begin(); it != Books.end(); ++it) {
        if (it->Name == name) {
            Books.erase(it);
            break;
        }
    }
};

void Library::DeleteAuthorFromLibrary(const std::string& author) {
        for (auto it = Books.begin(); it != Books.end(); ++it) {
            if (it->Author == author) {
                Books.erase(it);
                break;
            }
        }
};

std::ostream& operator << (std::ostream& os, const Library& library) {
    os << "NameOfLibrary - " << library.NameOfLibrary 
       << " Cases - " << library.Cases 
       << " Places - " << library.Places << std::endl;
    for (auto it = library.Books.begin(); it != library.Books.end(); it++) {
        os << *it;
    }
    return os;
};

std::string Library::getNameOfLibrary() {
    return NameOfLibrary;
};

int Library::getCases() {
    return Cases;
};

int Library::getPlaces() {
    return Places;
};

Library Library::operator +(Book& book) {
    (*this).Books.push_back(book);
    return *this;
}
