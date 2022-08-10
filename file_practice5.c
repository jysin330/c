#include<stdio.h>

int main(){
    FILE *ptr;
   
    int num;
    ptr=fopen("integer1.txt","r");
    fscanf(ptr,"%d", &num);
    
    num=2*num;
    ptr=fopen("integer1.txt","w");
    fprintf(ptr,"%d",num);
    return 0;
}