/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2
*/


#include <iostream>
#include "../include/Students.h"
#include "../include/Faculty.h"
int main()
{
    Students eitiStudents;
    Faculty EiTI(eitiStudents);
    EiTI.menu();
    return 0;
}
