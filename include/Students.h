/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2
*/

#ifndef STUDENTS_HPP
#define STUDENTS_HPP

#include <string>
#include <vector>

#include "../include/Student.h"
#include "../include/StudentBase.h"

class Students
{
private:
    std::vector<StudentBase*>  studentsVect;

public:
    template<class T>
    void addStudent(std::string Name,unsigned long Number, unsigned long IndexNumber, T Year)
    {
        Student<T>* newStudent = new Student<T>(Name, Number, IndexNumber,Year);
        studentsVect.push_back(newStudent);
    }

    Students() {};
    ~Students();
    int kickStudent(std::string sName);//student kicked, graduated or died
    unsigned long getIndex(std::string sName);//student's index
    std::vector<StudentBase*>::iterator findStudentPointer(std::string Name); //student's Pointer
    friend std::ostream& operator<<(std::ostream& os, const Students& studentsList);
};
#endif //STUDENTS_HPP
