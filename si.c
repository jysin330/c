#include<stdio.h>
int main(){
    int si,p,t,r;
    printf("enter p\n");
    scanf("%d", &p);
    printf("enter  t\n");
    scanf("%d", &t);
    printf("enter r\n");
    scanf("%d", &r);
    si=(p*t*r)/100;
    printf("si is %d", si);
    return 0;
}