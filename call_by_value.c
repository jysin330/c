# include<stdio.h>
int sum(int x, int y);
int main(){
    int a=3, b=4;
    printf("the value of a and b is %d and %d \n", a,b );
    printf("the sum of %d and %d is : %d\n", a,b,sum(a,b) );
    printf("the value of a and b is %d and %d \n", a,b );
    return 0;
}
int sum(int a, int b){
    int c= a+b;
    a=34;
    b=45;
    return c;
}