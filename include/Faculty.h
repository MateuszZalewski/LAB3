/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2
*/
#ifndef FACULTY_HPP
#define FACULTY_HPP

#include "../include/Students.h"

class Faculty
{
public:
    Students& studentsContainer;
    
    Faculty(Students& stud);
    ~Faculty(){};
    void initializeFaculty();
    void menu();
};
#endif //FACULTY
