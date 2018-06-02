#include "../include/Faculty.h"
#include "../include/Dean.h"
#include <string>

Faculty::Faculty(Students& stud) : studentsContainer(stud) {};

void Faculty::initializeFaculty()
{

    studentsContainer.addStudent<std::string>("Adam",51325,122312, "Junior");
    studentsContainer.addStudent<std::string>("Andrzej",1221512,34655364,"Sophomore");
    studentsContainer.addStudent<int>("Michal",512752,12631204,4);
    studentsContainer.addStudent<int>("Robert",1215812,34645364,5);
    studentsContainer.addStudent<std::string>("Jarek",513695,122352, "Freshman");
    studentsContainer.addStudent<std::string>("Ahmed",12215812,34255364,"Senior");
    studentsContainer.addStudent<int>("Haru",512782,12681204,3);
    studentsContainer.addStudent<int>("Konrad",1915812,34685364,2);
}

void Faculty::menu()
{
    int decision;

    initializeFaculty();
    Teacher proffessor("Malysz",123123,studentsContainer);
    Dean dean("Dziekan",123543,studentsContainer,123);
    while(1)
    {
        decision = 0;
        cout<<"1. Teacher"<<endl<<"2.Dean"<<endl<<"3.Exit"<<endl;
        while(decision<1||decision>3)
        {
            cin>>decision;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
        if(decision==1)
        {
            while(1)
            {
                proffessor.teacherActions();
                break;
            }
        }

        else if(decision==2)
        {
            while(1)
            {
                dean.deanActions();
                break;
            }
        }
        else if(decision == 3)
        {
            return;
        }
    }
}
