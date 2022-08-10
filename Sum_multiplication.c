# include<stdio.h>

int main(){
    int i , n , sum=0;
    scanf("%d", &n);
     printf("multiplication of %d\n", n);
    for(i=1; i<=10; i++){
    printf("%d * %d = %d\n", n, i, n*i);
    sum += i*n;
    }
    printf("sum = %d", sum);
    return 0;
}