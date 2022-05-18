#include <iostream>
#include "tasks_rk1.h"

void test_8()
{
    StudentInfo Test("Some","One","0001");
    std::cout << Test.addSubj("Grundlagen_of_C++") << std::endl;
    std::cout << Test.addSubj("Mathe") << std::endl;
    std::cout << Test.addSubj("Physik") << std::endl;
    Test.addMark("Grundlagen_of_C++", 5);
    Test.addMark("Grundlagen_of_C++", 5);
    Test.addMark("Grundlagen_of_C++", 5);
    Test.addMark("Grundlagen_of_C++", 5);
    Test.addMark("Mathe", 4);
    Test.addMark("Mathe", 5);
    Test.addMark("Physik", 3);
    Test.addMark("Physik", 4);
    Test.printInfoStudent();
    Test.writeAllInfoToFile();
}


int main() {

    test_8();


    return 0;
}
