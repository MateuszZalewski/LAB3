#include <vector>
#include "../include/Students.h"


std::ostream& operator<<(std::ostream& os, const Students& studentsList)
{
    for (auto iter = studentsList.studentsVect.begin(); iter != studentsList.studentsVect.end(); iter++)
    {
        os<<(*iter)->getIndexNumber() <<":  " <<*(*iter)<<std::endl;
    }
    return os;
}
int Students::kickStudent(std::string sName)//student kicked, graduated or died
{
    auto iter = findStudentPointer(sName);
    if(iter == studentsVect.end())
    {
        std::cout<<"Couldn't kick "<<sName<<". He/She is not on tge list of students."<<std::endl;
        return 0;
    }
    delete (*iter);
    studentsVect.erase(iter);
    std::cout<<sName<<" kicked out succesfully"<<std::endl;
    return 1;
}
unsigned long Students::getIndex(std::string sName)//student's index
{
    auto iter = findStudentPointer(sName);
    if(iter == studentsVect.end())
    {
        std::cout<<"There is no student with that name";
        return 0;
    }
    return (*iter)->getIndexNumber();
}
std::vector<StudentBase*>::iterator Students::findStudentPointer(std::string Name)
{
    for(auto iter = studentsVect.begin(); iter != studentsVect.end(); iter++)
    {
        if((*iter)->getName() == Name)
        {
            return iter;
        }
    }

    std::cout<<"Couldn't find "<<Name<<" on the list. He/She is probably at other university"<<std::endl;
    return studentsVect.end();
}
Students::~Students()
{
    for(auto iter = studentsVect.begin(); iter != studentsVect.end(); iter++)
    {
        delete (*iter);
    }
}
