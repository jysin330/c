#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num1,num2, i,n;
    
    for(n=21; n>=1; )
    {
        printf("no of matchstick picked by player: ");
        scanf("%d",&num1);
        n=n-num1;
        printf("remaining sticks is: %d\n ",n);
        if(n!=0)
        {
        srand(time(0));
        num2=rand()%4 + 1;
        printf("no of matchstick picked by computer:%d\n",num2);
        //scanf("%d",&num2);
        n=n-num2;
        printf("remaining sticks is :%d\n ",n);
        if(n<=0)
        {
            printf("player won");
        }
        }
        else
        {
            printf("computer won!");

        }
    
    }
    return 0;
}