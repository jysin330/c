#include<stdio.h>

int main(){
    int n, prime_num;
    printf("enter the number\n");
    scanf("%d",&n);
    for(int i=2; i<n;i++)
    {
        if(n%i==0)
        {
            prime_num=0;
        }


    }
    if(prime_num!=0)
    printf("%d is prime",n);
    else
    printf("not prime");

    
    return 0;
}