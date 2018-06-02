/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2
*/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
#include "../include/StudentBase.h"
#include "../include/PersonBase.h"

template<class T>
class Student: public StudentBase
{
    T year;

public:
    Student(std::string namm,unsigned long numm, unsigned long indexx,T yearr) : StudentBase(namm,numm,indexx),year(yearr) {};
     ~Student() {};

    void showStudent(std::ostream& os) const
    {
        os << name;
        int length = 10 - name.size();
		while (length > 0) {
			os << " ";
			length--;
		}
		os<< "   " << year << "\n";
    }
};
#endif //STUDENT_HPP
