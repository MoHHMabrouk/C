#include "utils.h"

void SWAP_voidChars(char *charOne, char *charTwo)
{
    char charTemp;
    charTemp = *charOne;
    *charOne = *charTwo;
    *charTwo = charTemp;
}

void SWAP_voidInts(int *intOne, int *intTwo)
{
    int intTemp;
    intTemp = *intOne;
    *intOne = *intTwo;
    *intTwo = intTemp;
}

void MAX_voidInt(int number, int *maximum)
{
    static int max, flag;
    if (flag == 0)
    {
        max = number;
        flag = 1;
    }

    if (number > max)
    {
        max = number;
    }
    *maximum = max;
}

void SWAP_voidPointers(char **ptrOne, char **ptrTwo)
{
    char *ptrTemp = *ptrOne;
    *ptrOne = *ptrTwo;
    *ptrTwo = ptrTemp;
}