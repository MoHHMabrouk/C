/***************************************************************************/
/*   FILE NAME : str.c                                                     */
/*   AUTHOR    : MOHAMED MABROUK                                           */
/*   DATE      : 2 DEC 2023                                                */
/*                                                                         */
/*   PURPOSE   : Source file for the string manipulation library.          */
/***************************************************************************/

#include "str.h"
#include "utils.h"
#include <stdio.h>

// Function to read a string from the standard input
void STR_voidScan(char *str)
{
    int i = 0;
    fflush(stdin); // Clear the input buffer

    // Read characters until a newline is encountered
    scanf("%c", &str[i]);
    while (str[i] != '\n')
    {
        i++;
        scanf("%c", &str[i]);
    }

    str[i] = 0; // Null-terminate the string
}

// Function to read a string of specified size from the standard input
void STR_voidScantoSize(char *str, int size)
{
    int i = 0;
    fflush(stdin); // Clear the input buffer

    // Read characters until a newline is encountered or size limit is reached
    scanf("%c", &str[i]);
    while (i < size && str[i] != '\n')
    {
        i++;
        scanf("%c", &str[i]);
    }

    str[i] = 0; // Null-terminate the string
}

// Function to print a string to the standard output
void STR_voidPrint(char *str)
{
    int i = 0;

    // Print each character until the null terminator is reached
    while (str[i])
    {
        printf("%c", str[i]);
        i++;
    }
}

// Function to reverse a string
void STR_voidStrReverse(char *str)
{
    int len = 0;
    int counter = 0;

    // Find the length of the string
    while (str[counter])
    {
        counter++;
    }

    len = counter - 1;
    counter = 0;

    // Swap characters to reverse the string
    while (counter <= len)
    {
        SWAP_voidChars(&str[counter], &str[len]);
        len--;
        counter++;
    }
}

// Function to convert an integer to a string
void STR_voidIntToStr(int number, char *str)
{
    int counter = 0;
    char signFlag = 0;

    // Check if the number is negative
    if (number < 0)
    {
        signFlag = 1;
        number *= -1; // Make the number positive
    }

    // Convert each digit to a character and store in the string
    while (number)
    {
        str[counter] = (number % 10) + '0';
        number /= 10;
        counter++;
    }

    // Add the negative sign if the number was negative
    if (signFlag == 1)
    {
        str[counter++] = '-';
    }

    STR_voidStrReverse(str); // Reverse the string to get the correct order

    str[counter] = 0; // Null-terminate the string
}

// Function to convert a string to an integer
void STR_voidStrToInt(char *str, int *number)
{
    int counter = 0;
    char signFlag = 0;

    // Initialize the number to 0
    if (*number != 0)
    {
        *number = 0;
    }

    // Check if the string represents a negative number
    if (str[0] == '-')
    {
        signFlag = 1;
        counter++;
    }

    // Convert each character to a digit and accumulate to form the number
    while (str[counter])
    {
        *number += str[counter] - '0';
        *number *= 10;
        counter++;
    }

    // Make the number negative if the string represented a negative number
    if (signFlag == 1)
    {
        *number *= -1;
    }
}

// Function to copy characters from a string to another without repeating
void STR_voidCharCopyNoRepeat(char *str, char *strCopy)
{
    char freqStr[256] = {0}; // Frequency array to keep track of characters
    int counterStr = 0, counterStrCopy = 0;

    while (str[counterStr])
    {
        // Copy only if the character is not encountered before
        if (freqStr[str[counterStr]] == 0)
        {
            strCopy[counterStrCopy] = str[counterStr];
            freqStr[str[counterStr]] = 1; // Mark the character as encountered
            counterStrCopy++;
        }
        counterStr++;
    }
    strCopy[counterStrCopy] = 0; // Null-terminate the copied string
}


// Function to compare two strings
STR_t STR_voidCompare(char *str1, char *str2)
{
    STR_t strCmp = STR_OK;
    for (int counter1 = 0, counter2 = 0; (str1[counter1] || str2[counter2]) && strCmp == STR_OK; counter1++, counter2++)
    {
        if (str1[counter1] != str2[counter2])
        {
            strCmp = STR_NOK;
        }
    }
    return strCmp;
}

// Function to search for a string in an array of strings
STR_t STR_voidArraySearch(char **array, int size, int *index, char *str)
{
    STR_t strSearch = STR_NOK, strCmp = STR_NOK;
    for (int counter = 0; counter < size && strSearch == STR_NOK; counter++)
    {
        // Compare the current string in the array with the target string
        if (STR_voidCompare(array[counter], str) == STR_OK)
        {
            strSearch = STR_OK;
            *index = counter; // Record the index where the string was found
        }
    }
    return strSearch;
}

STRCMP_t STR_voidCompareSort(char *str1, char *str2)
{
    STRCMP_t strCmp = STR_EQUAL;
    for (int counter = 0; (str1[counter] || str2[counter]) && strCmp == STR_EQUAL; counter++)
    {
        if (str1[counter] > str2[counter])
        {
            strCmp = STR_SMALLER;
        }
        else if (str1[counter] < str2[counter])
        {
            strCmp = STR_BIGGER;
        }
    }
    return strCmp;
}

void STR_void2DPrint(char (*arr)[10], int rows, int cols)
{
    for (int counterRows = 0; counterRows < rows; counterRows++)
    {
        for (int counterCols = 0; counterCols < cols; counterCols++)
        {
            printf("%c", *(arr + counterRows * cols + counterCols));
        }
        printf("\n");
    }
}
