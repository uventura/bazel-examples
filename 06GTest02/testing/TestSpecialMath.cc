#include "TestSpecialMath.h"

uint64_t SpecialMath::FastExp(uint64_t base, uint64_t exponent)
{
    if(exponent <= 0)
        return 1;
    if(exponent == 1)
        return base;
    uint64_t result = FastExp(base, exponent/2);
    return result*result*(exponent%2==0?1:base);
}