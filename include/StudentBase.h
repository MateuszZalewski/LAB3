
/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2
*/

#ifndef STUDENTBASE_HPP
#define STUDENTBASE_HPP

#include "../include/PersonBase.h"
class StudentBase: public PersonBase
{
    unsigned long indexNumber;
public:
    StudentBase(std::string nam, unsigned long num, unsigned long index);
    unsigned long getIndexNumber();
    virtual void showStudent(std::ostream& os) const=0;
    virtual ~StudentBase() {};

    friend std::ostream& operator<<(std::ostream& os, const StudentBase& sBase);
};



#endif //SUDENTBASE_HPP
