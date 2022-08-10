# include<stdio.h>

int main(){
    int i=23;
    int *j=&i;
    int **k=&j;
    printf("the value of i is %d", **k);
    return 0;
}