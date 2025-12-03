#ifndef LIVRE_H
#define LIVRE_H
#include <iostream>
#include <string>
#include "date.h"

class Livre{
    private:
    std::string title_;
    std::string author_;
    std::string language_;
    Date date_;
    std::string isbn_;

    public:
    Livre(std::string title, std::string author, std::string language, Date& date, std::string isbn);
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getLanguage() const;
    Date getDate() const;
    std::string getIsbn() const;
};

#endif