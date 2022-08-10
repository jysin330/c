
#include<stdio.h>


int main(){
    int num;
    printf("enter the value:\n");
    scanf("%d",&num);

    if(num<0)
    {
        num=num*(-1);
        printf("%d\n",num);
    }
    else
    {
        printf("%d",num);
    }
    
    return 0;
}