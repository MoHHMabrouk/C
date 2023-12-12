#include "star.h"
#include "str.h"
/*


void STAR_voidPrint(int rows, int cols, int star_rows_pos, int star_cols_pos)
{
    star_rows_pos--;
    star_cols_pos--;
    char(*starArr)[cols] = malloc(rows * cols * sizeof(char));
    for (int rowsCounter = 0; rowsCounter < rows; rowsCounter++)
    {
        for (int colsCounter = 0; colsCounter < cols; colsCounter++)
        {
            if (rowsCounter < star_rows_pos && colsCounter < star_cols_pos)
            {
                starArr[rowsCounter][colsCounter] = 'A';
            }
            else if (rowsCounter < star_rows_pos && colsCounter > star_cols_pos)
            {
                starArr[rowsCounter][colsCounter] = 'B';
            }
            else if (rowsCounter > star_rows_pos && colsCounter < star_cols_pos)
            {
                starArr[rowsCounter][colsCounter] = 'C';
            }
            else if (rowsCounter > star_rows_pos && colsCounter > star_cols_pos)
            {
                starArr[rowsCounter][colsCounter] = 'D';
            }
            else if (rowsCounter == star_rows_pos && colsCounter > star_cols_pos)
            {
                starArr[rowsCounter][colsCounter] = '<';
            }
            else if (rowsCounter == star_rows_pos && colsCounter < star_cols_pos)
            {
                starArr[rowsCounter][colsCounter] = '>';
            }
            else if (rowsCounter > star_rows_pos && colsCounter == star_cols_pos)
            {
                starArr[rowsCounter][colsCounter] = '^';
            }
            else if (rowsCounter < star_rows_pos && colsCounter == star_cols_pos)
            {
                starArr[rowsCounter][colsCounter] = 'v';
            }
            else
                printf(" ");
        }

        starArr[star_rows_pos][star_cols_pos] = '*';
    }
    STR_void2DPrint(starArr, rows, cols);
}


*/
