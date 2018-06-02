/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2
*/

#ifndef DEAN_HPP
#define DEAN_HPP

#include "Students.h"
#include "Teacher.h"
class Dean: public Teacher
{
    int specialID;
public:
    Dean(std::string dname,unsigned long dnumber, Students &studentsObj, int special);
    ~Dean(){};
    void printID(std::string ID);
    void printID(int ID);
    void deanActions();
};
#endif //DEAN_HPP
