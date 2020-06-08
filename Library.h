#pragma once
#include "Book.h"
#include <list>
#include <algorithm>
#include <iostream>
#include <stdio.h>

#ifndef Library_h
#define Library_h

class Library 
{
public:
    std::string NameOfLibrary;
    std::list<Book> Books;
    int Cases; // ���������� ������ ��� ����
    int Places; // ���������� ���� ��� ���� � ����� �����

    ~Library();
    Library();
    Library(const std::string& NameofLibrary, int Cases, int Places);
    void AddBookInLibrary(Book& book); //�������� � ������ �����
    void DeleteBookFromLibrary(const std::string name); //������� ����� �� ��������
    void DeleteAuthorFromLibrary(const std::string& author); //������� ���� ����� ������� ������
    friend std::ostream& operator <<(std::ostream& os, const Library& library);
    std::string getNameOfLibrary();
    int getCases();
    int getPlaces();

    Library operator +(Book& book);
};

#endif