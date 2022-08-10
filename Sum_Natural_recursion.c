# include<stdio.h>
int sum_rec(int n);
int main(){
    int a;
    scanf("%d", &a);
    
    printf("the sum of %d natural number is %d\n",a, sum_rec(a));
    
    
    return 0;
}
int sum_rec(int n){
    int sum;
    if(n==0){
        return 0;
    }
    else{
    sum = n+ sum_rec(n-1);
    return sum;
}
}