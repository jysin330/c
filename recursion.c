# include<stdio.h>
int factorial(int x);

int main(){
    int n;
    printf("enter the number to find factorial of :");
    scanf("%d", &n);
    printf("the factorial of %d is : %d", n, factorial(n));

    return 0;
}
int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
else{
    return x*factorial(x-1);
}
}