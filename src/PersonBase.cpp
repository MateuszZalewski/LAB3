/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2yresy
 foashfpasehfpoasnfisaenf
 paogijropgnoasdr
*/


#include "../include/PersonBase.h"


PersonBase::PersonBase(std::string nam, unsigned long num)
{
    name = nam;
    number = num;
}
std::string PersonBase::getName()
{
    return name;
}
