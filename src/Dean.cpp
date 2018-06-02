
#include "../include/Dean.h"

Dean::Dean(std::string dname,unsigned long dnumber, Students &studentsObj, int special):Teacher(dname,dnumber,studentsObj),specialID(special) {};


void Dean::printID(std::string ID)
{
    std::cout<<"Dean "<<this->getName()<<"'s special ID: "<<specialID<<std::endl;
}
void Dean::printID(int ID)
{
    std::cout<<"ID: "<<specialID<<std::endl;
}
void Dean::deanActions()
{
    int choose,idChoose;
    while(1)
    {
        choose = 0;
        idChoose = 0;
        std::cout<<"1. Print your special ID"<<std::endl;
        std::cout<<"2. Manage students"<<std::endl;
        std::cout<<"3. Exit to main menu"<<std::endl;
        while(choose<1||choose>3)
        {
            std::cin>>choose;
        }
        std::cin.clear();
        std::cin.ignore(100, '\n');
        if(choose == 1)
        {
            std::cout<<"1. To print name and ID"<<std::endl<<"2. print only ID" << std::endl;
            while(idChoose<1||idChoose>2)
            {
                std::cin>>idChoose;
            }
            std::cin.clear();
            std::cin.ignore(100, '\n');
            if(idChoose ==1)
            {
                printID("string");
            }
            else if(idChoose == 2)
            {
                printID(1);
            }
        }
        else if(choose == 2)
        {
            teacherActions();
        }
        else if(choose == 3)
        {
            return;
        }
    }
}



