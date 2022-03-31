#include "rand.h"

void PrintNTimes(const char* message, int nPrints)
{
    std::cout << "=> Print " << nPrints << "\n";
    for(int i=0;i<nPrints;++i)
        std::cout << "Message[" << i << "]" << message << "\n";
}