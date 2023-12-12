#include "mathLib.h"

long long MATH_voidIntFact(long long number)
{
    if (number > 0)
    {
        return (number * MATH_voidIntFact(number - 1));
    }
    return 1;
}

long long MATH_voidIntFabbo(long long number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    return MATH_voidIntFabbo(number - 1) + MATH_voidIntFabbo(number - 2);
}