str = fopen("sudoku.txt", "r");
    int arr[9][9];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            fscanf(str, "%d", &arr[i][j]);
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }