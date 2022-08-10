# include<stdio.h>

int main(){
    int i=1, sum=0, n;
    scanf("%d", &n);
    // while(i<=n){
    //    sum += i;
    //      i++;
    // }
    do{
       sum += i;
       i++;

    }while(i<=n);
    printf("sum = %d", sum);
    return 0;
}