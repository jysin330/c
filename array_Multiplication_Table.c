# include<stdio.h>

int main(){
    int arr[10],n;
    scanf("%d",&n);
    // for(int i=0; i<10; i++){
    // arr[i]=(i+1)*5;
    // printf(" arr[%d]= 5*%d = %d\n", i, i+1, arr[i]);
    // }
    for(int i=0; i<10; i++){
    arr[i]=(i+1)*n;
    printf(" arr[%d]= %d*%d = %d\n", i, n,i+1, arr[i]);
    }

    return 0;
}