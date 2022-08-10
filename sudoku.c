#include <stdio.h>
#include <stdlib.h>
int check_row_sudoku(int ptr[][9])
{
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        int j = 0;
        if (ptr[i][j] != ptr[i][j + 1] && ptr[i][j] != ptr[i][j + 2] && ptr[i][j] != ptr[i][j + 3] && ptr[i][j] != ptr[i][j + 4] && ptr[i][j] != ptr[i][j + 5] && ptr[i][j] != ptr[i][j + 6] && ptr[i][j] != ptr[i][j + 7] && ptr[i][j] != ptr[i][j + 8])
        {
            if (ptr[i][j + 1] != ptr[i][j + 2] && ptr[i][j + 1] != ptr[i][j + 3] && ptr[i][j + 1] != ptr[i][j + 4] && ptr[i][j + 1] != ptr[i][j + 5] && ptr[i][j + 1] != ptr[i][j + 6] && ptr[i][j + 1] != ptr[i][j + 7] && ptr[i][j + 1] != ptr[i][j + 8])
            {
                if (ptr[i][j + 2] != ptr[i][j + 3] && ptr[i][j + 2] != ptr[i][j + 4] && ptr[i][j + 2] != ptr[i][j + 5] && ptr[i][j + 2] != ptr[i][j + 6] && ptr[i][j + 2] != ptr[i][j + 7] && ptr[i][j + 2] != ptr[i][j + 8])
                {
                    if (ptr[i][j + 3] != ptr[i][j + 4] && ptr[i][j + 3] != ptr[i][j + 5] && ptr[i][j + 3] != ptr[i][j + 6] && ptr[i][j + 3] != ptr[i][j + 7] && ptr[i][j + 3] != ptr[i][j + 8])
                    {
                        if (ptr[i][j + 4] != ptr[i][j + 5] && ptr[i][j + 4] != ptr[i][j + 6] && ptr[i][j + 4] != ptr[i][j + 7] && ptr[i][j + 4] != ptr[i][j + 8])
                        {
                            if (ptr[i][j + 5] != ptr[i][j + 6] && ptr[i][j + 5] != ptr[i][j + 7] && ptr[i][j + 5] != ptr[i][j + 8])
                            {
                                if (ptr[i][j + 6] != ptr[i][j + 7] && ptr[i][j + 6] != ptr[i][j + 8])
                                {
                                    if (ptr[i][j + 7] != ptr[i][j + 8])
                                    {
                                        count += 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return count;
}
int check_column_sudoku(int ptr[][9])
{
    int count1 = 0;
    for (int j = 0; j < 9; j++)
    {
        int i = 0;
        if (ptr[i][j] != ptr[i + 1][j] && ptr[i][j] != ptr[i + 2][j] && ptr[i][j] != ptr[i + 3][j] && ptr[i][j] != ptr[i + 4][j] && ptr[i][j] != ptr[i + 5][j] && ptr[i][j] != ptr[i + 6][j] && ptr[i][j] != ptr[i + 7][j] && ptr[i][j] != ptr[i + 8][j])
        {
            if (ptr[i + 1][j] != ptr[i + 2][j] && ptr[i + 1][j] != ptr[i + 3][j] && ptr[i + 1][j] != ptr[i + 4][j] && ptr[i + 1][j] != ptr[i + 5][j] && ptr[i + 1][j] != ptr[i + 6][j] && ptr[i + 1][j] != ptr[i + 7][j] && ptr[i + 1][j] != ptr[i + 8][j])
            {
                if (ptr[i + 2][j] != ptr[i][j] && ptr[i + 2][j] != ptr[i][j] && ptr[i + 2][j] != ptr[i][j] && ptr[i + 2][j] != ptr[i][j] && ptr[i + 2][j] != ptr[i][j] && ptr[i + 2][j] != ptr[i][j])
                {
                    if (ptr[i + 3][j] != ptr[i + 4][j] && ptr[i + 3][j] != ptr[i + 5][j] && ptr[i + 3][j] != ptr[i + 6][j] && ptr[i + 3][j] != ptr[i + 7][j] && ptr[i + 3][j] != ptr[i + 8][j])
                    {
                        if (ptr[i + 4][j] != ptr[i + 5][j] && ptr[i + 4][j] != ptr[i + 6][j] && ptr[i + 4][j] != ptr[i + 7][j] && ptr[i + 4][j] != ptr[i + 8][j])
                        {
                            if (ptr[i + 5][j] != ptr[i + 6][j] && ptr[i + 5][j] != ptr[i + 7][j] && ptr[i + 5][j] != ptr[i + 8][j])
                            {
                                if (ptr[i + 6][j] != ptr[i + 7][j] && ptr[i + 6][j] != ptr[i + 8][j])
                                {
                                    if (ptr[i + 7][j] != ptr[i + 8][j])
                                    {
                                        count1 += 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return count1;
}
int main()
{
    FILE *str;
    FILE *ptr;

    // str=fopen("sudoku.txt", "w");
    // int arr[9][9];
    // int *ptr=&arr[0][0];

    //  for(int i=0; i<9; i++){
    //       for(int j=0; j<9; j++){
    //             scanf("%d", ptr);
    //             ptr++;
    //  }
    //   }
    //  for(int i=0; i<9; i++){
    //       for(int j=0; j<9; j++){
    // fprintf(str, "%d\t", arr[i][j]);
    //  }
    //  fprintf(str,"\n\n");
    //   }
    // str = fopen("sudoku.txt", "r");
    // int arr[9][9];

    // for (int i = 0; i < 9; i++)
    // {
    //     for (int j = 0; j < 9; j++)
    //     {
    //         fscanf(str, "%d", &arr[i][j]);
    //         printf("%d\t", arr[i][j]);
    //     }
    //     printf("\n\n");
    // }

    ptr = fopen("sudoku1.txt", "r");
    int arr[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            fscanf(ptr, "%d", &arr[i][j]);
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }
    printf("\n");

    int rowcount = check_row_sudoku(arr);
    int columncount = check_column_sudoku(arr);

    if (rowcount == 9 && columncount == 9)
    {
        printf(" congratulations!!! you won.\n\n");
    }
    else
    {
        printf(" sad!!! you lose.\n\n");
    }

    fclose(str);
    fclose(ptr);

    return 0;
}