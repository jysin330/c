#include<stdio.h>
#define pie 3.14
int main(){
    float r,h ;
    printf("enter radius of circle\n");
    scanf("%f", &r);
    printf("area of circle is %.2f\n\n", pie*r*r);
     printf("enter height of cylinder\n");
    scanf("%f", &h);
    printf("volume of cylinder is %.2f", pie*r*r*h);
    return 0;
}