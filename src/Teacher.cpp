#include "../include/Teacher.h"


Teacher::Teacher(std::string Tname,unsigned long Tnumber, Students &studentsObj):PersonBase(Tname,Tnumber), studentsGroup(studentsObj) {};

void Teacher::addStudent()
{
    std::string name;
    unsigned long number,indexS;
    short attributeDisplayOption;
    int year;

    std::cout << "Enter student's name: ";
    getline(std::cin, name);
    std::cout << "Enter student's number: ";

    std::cin>>number;
    std::cin.clear();
    std::cin.ignore(100, '\n');

    std::cout << "Enter student's index: ";

    std::cin >> indexS;
    std::cin.clear();
    std::cin.ignore(100, '\n');

    std::cout << "Enter student's year(1/2/3/4/5)";

    std::cin >> year;
    std::cin.clear();
    std::cin.ignore(100, '\n');

    std::cout << "Which one do you prefer?  year: 1. (0/1/2/3/4/5)   2. (Freshman/Sophomore/Junior/Senior) : ";

    std::cin >> attributeDisplayOption;
    std::cin.clear();
    std::cin.ignore(100, '\n');
    addStudentBackEnd(name,number,indexS,attributeDisplayOption);
}
    void Teacher::addStudentBackEnd(std::string nameS,unsigned long numberS,unsigned long index_, short displayOption, int year_)
    if (displayOption == 1)
    {
        studentsGroup.addStudent<int>(nameS, numberS, index_,year_);
    }
    else
    {
        if (year_ == 1)
        {
            studentsGroup.addStudent<string>(nameS, numberS, index_,"Freshman");
        }
        else if(year_ == 2)
        {
            studentsGroup.addStudent<string>(nameS, numberS, index_,"Sophomore");
        }
        else if(year_ == 3)
        {
            studentsGroup.addStudent<string>(nameS, numberS, index_,"Junior");
        }
        else
        {
            studentsGroup.addStudent<string>(nameS, numberS, index_,"Senior");
        }
    }
}

void Teacher::kickStudent()
{
    std::string studentToKick;
    std::cout << studentsGroup;

    cout << "\nWho do you want to kick from your group?: ";
    getline(std::cin, studentToKick);
    if (studentsGroup.kickStudent(studentToKick)==0)
    {
        std::cout << "No student on the list, he is probably kicked already.";
    }
}
void Teacher::showStudents()
{
    std::cout<<"Students: "<<std::endl<<studentsGroup<<std::endl;
}
void Teacher::teacherActions()
{
    int tDecision;
    while(1)
    {
        clearScreen();
        tDecision = 0;
        std::cout<<"Now you can choose teacher's funtions"<<std::endl;
        std::cout<<"1.Add student to your group"<<std::endl;
        std::cout<<"2.Kick student from your group"<<std::endl;
        std::cout<<"3.Show your students"<<std::endl;
        std::cout<<"4.Exit to main menu"<<std::endl;

        while(tDecision<1||tDecision>4)
        {
            std::cin>>tDecision;
        }
        std::cin.clear();
        std::cin.ignore(100, '\n');
        switch(tDecision)
        {
        case 1:
            addStudent();
            break;
        case 2:
            kickStudent();
            break;
        case 3:
            showStudents();
            break;
        case 4:
            return;
        default:
            break;
        }
    }

}
void Teacher::clearScreen()
{
#ifdef WINDOWS
    std::system("cls");
#else
    // Assume POSIX
    std::system ("clear");
#endif
}
