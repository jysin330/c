#include<stdio.h>
int main(){
float Fahrenheit,Celsius;
printf("enter the temperature in celsius\n");
scanf("%f", &Celsius);
Fahrenheit = (Celsius * 1.8) + 32;

printf("celsius to fahrenheit be %.2f\n",Fahrenheit );
return 0;

}