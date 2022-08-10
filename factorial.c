# include<stdio.h>

int main(){
    int i=2,n, factorial=1;
    scanf("%d", &n);

    //  for(i=2; i<=n; i++){
    //      factorial *= i;

    //  }
    while(i<=n){
        factorial *= i;
        i++;
    }

     printf("factorial =%d", factorial);
    return 0;
}