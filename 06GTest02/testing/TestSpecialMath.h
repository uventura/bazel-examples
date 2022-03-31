#include <iostream>
#include <gmock/gmock.h>

#include "SpecialMath.h"

class SpecialMathImpl: public SpecialMath
{
    public:
        MOCK_METHOD2(FastExp, uint64_t(uint64_t base, uint64_t exponent));
};