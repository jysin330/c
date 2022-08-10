#include <stdio.h>
int func1(int num1)
{
    int i = 2;
    printf("the prime factor of %d is ",num1);
    while (num1 != 1)
    {
            if (i==2){
                printf("1");
            }
        if (num1 % i == 0)
        {
            num1 = num1/i;
            printf("*%d", i);
        }
        else
        {
            i++;
        }
    }
   
}
int main()
{
    int num, prime;
    printf("enter the positive number : ");
    scanf("%d", &num);
    func1(num);
    return 0;
}