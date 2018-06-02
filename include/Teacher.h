/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2
*/

#ifndef TEACHER_HPP
#define TEACHER_HPP

#include "../include/PersonBase.h"
#include "../include/Students.h"
using namespace std;
class Teacher:public PersonBase
{
    Students &studentsGroup;
public:
    Teacher(std::string Tname,unsigned long number, Students &studentsObj);
    void addStudent();
    void kickStudent();
    void showStudents();
    void teacherActions();
    void clearScreen(); 
    void addStudentBackEnd(std::string nameS,unsigned long numberS,unsigned long index_, short displayOption, int year_);
};

#endif //TEACHER_HPP
