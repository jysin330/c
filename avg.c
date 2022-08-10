# include<stdio.h>
float average(float x, float y, float z);
int main(){
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    printf("the average  is %.2f ", average(a,b,c));

    return 0;
}
float average(float x, float y, float z){
float avg;
 avg = (x+y+z)/3;
 return avg;
}