/*
Imie i nazwisko:         Jakub Bryl
Numer indeksu:           293085
Prowadzacy laboratorium: Wiktor Kusmirek
Numer projektu:          2
*/


#ifndef PERSONBASE_HPP
#define PERSONBASE_HPP
#include <string>

class PersonBase
{
    protected:
	std::string name;
	unsigned long number;

public:
	PersonBase() {};
	PersonBase(std::string nam, unsigned long num);
	~PersonBase() {};
	std::string getName();
};
#endif //PERSONBASE_HPP
