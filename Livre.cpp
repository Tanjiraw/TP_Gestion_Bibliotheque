#include "date.h"
#include "Livre.h"
#include <iostream>
#include <string>

Livre::Livre(std::string title, std::string author, std::string language, Date& date, std::string isbn):
title_(title), author_(author), language_(language), date_(date), isbn_(isbn) {}

std::string Livre::getTitle() const{
    return title_;
}

std::string Livre::getAuthor() const{
    return author_;
}

std::string Livre::getLanguage() const{
    return language_;
}

Date Livre::getDate() const{
    return date_;
}

std::string Livre::getIsbn() const{
    return isbn_;
}
