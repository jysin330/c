# include<stdio.h>

int main(){
    int arr[10];
    int *ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2]){
        printf("these point to the same address in memory .");

    }
    else{
        printf("these point don't at the same address in memory  .");

    }
    return 0;
}