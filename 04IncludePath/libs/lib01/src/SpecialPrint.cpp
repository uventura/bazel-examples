#include "SpecialPrint.h"

void printDiamond()
{
    std::cout << "  *  \n";
    std::cout << " *** \n";
    std::cout << "*****\n";
    std::cout << " *** \n";
    std::cout << "  *  \n";
}

void printDiamonds(int amount)
{
    for(int i=0; i<amount; ++i)
        printDiamond();
}