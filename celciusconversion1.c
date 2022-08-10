# include<stdio.h>
float conversion(float celsius);
int main(){
    printf("celsius to Fahrenheit is : %f ", conversion(32));
    return 0;
}
float conversion(float celsius){

    float Fahrenheit;

Fahrenheit = ( celsius* 1.8) + 32;
return Fahrenheit; 
}