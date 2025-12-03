#include "date.h"
#include <iostream>
#include <string>

Date::Date(int day, int month, int year) : day_(day), month_(month), year_(year) {}

int Date::getDay() const {
    return day_;
}

int Date::getMonth() const{
    return month_;
}

int Date::getYear() const{
    return year_;
}

std::string Date::printDate() const{
    return std::to_string(day_) + " / " + std::to_string(month_) + " / " + std::to_string(year_);
}

bool Date::isValid() const{
    if(month_ < 1 || month_ > 12){
        return false;
    }
    int nbDays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    bool isBisextille = (year_ % 4 == 0 && (year_ % 100 != 0 || year_ % 400 == 0));
    if(isBisextille == true){
        nbDays[2] = 29;
    }
    if(day_ < 1 || day_ > nbDays[month_]){
        return false;
    }
    return true;
}

