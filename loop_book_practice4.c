#include <stdio.h>

int main()
{
    int n, count1=0, count2=0, count3=0, number;
    printf("how many numbers user wants to enter? \n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("enter the number: ");
        scanf("%d",&number);
        if(number==0)
        {
            count1 = 1+count1;

        }
        if(number<0)
        {
            count2 = 1+count2;
        }
        
        if(number>0)
        {
            count3 = 1+count3;

        }
    }
    printf("the count of zeros are : %d\n",count1);
    printf("the count of negative numbers are : %d\n",count2);
    printf("the count of positive number are : %d\n",count3);

    return 0;
}