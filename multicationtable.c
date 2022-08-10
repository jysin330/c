# include<stdio.h>

int main(){
    int num,multiplication;
    scanf("%d", &num);
    printf(" **** multiplication of %d***\n", num);
    
    for (int i=1; i<=10 ; i++){
        
        multiplication= num* i;
        printf(" %d * %d = %d\n", num , i , multiplication);

    }
    return 0;
}