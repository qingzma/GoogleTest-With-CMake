#include <iostream>
#include "DBEsti.hpp"


using namespace std;
using namespace DBEsti_ns;
int main(int argc, char *argv[])
{
    auto sampleLib1 = DBEsti();
    
    std::cout << sampleLib1.getName() << std::endl;
    
    std::cout << sampleLib1.getFullName() << std::endl;
}
