#ifndef _UTILS_H_
#define _UTILS_H_

/**
 * @brief Swap two characters.
 *
 * @param charOne Pointer to the first character.
 * @param charTwo Pointer to the second character.
 */
void SWAP_voidChars(char *charOne, char *charTwo);

/**
 * @brief Swap two integers.
 *
 * @param intOne Pointer to the first integer.
 * @param intTwo Pointer to the second integer.
 */
void SWAP_voidInts(int *intOne, int *intTwo);

/**
 * @brief Swap two pointers to characters.
 *
 * @param ptrOne Pointer to the first pointer to character.
 * @param ptrTwo Pointer to the second pointer to character.
 */
void SWAP_voidPointers(char **ptrOne, char **ptrTwo);

/**
 * @brief Update the maximum value if the given number is greater.
 *
 * @param number The number to be compared with the current maximum.
 * @param maximum Pointer to the current maximum value.
 */
void MAX_voidInt(int number, int *maximum);

#endif // _UTILS_H_
