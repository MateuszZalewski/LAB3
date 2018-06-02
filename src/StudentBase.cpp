
   #include "../include/StudentBase.h"


    StudentBase::StudentBase(std::string nam, unsigned long num, unsigned long index) : PersonBase(nam,num), indexNumber(index) {};
    //to do: (it may be moved to PersonBase class cause it is possible for other people to join q
    // hmm
    //joinQueue(Queue &queue);
    unsigned long StudentBase::getIndexNumber()
    {
        return indexNumber;
    }
    std::ostream& operator<<(std::ostream& os, const StudentBase& sBase)
    {
        sBase.showStudent(os);
        return os;
    }

