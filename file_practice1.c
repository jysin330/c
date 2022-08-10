# include<stdio.h>

int main(){
    FILE *ptr;
    int a,b,c;
    // int i=23,j=34,k=67;
    ptr =fopen("integer.txt","r");
    // ptr =fopen("integer.txt","w");
    // fprintf(ptr,"%d %d %d", i,j,k);
    fscanf(ptr, "%d",&a);
    fscanf(ptr, "%d",&b);
    fscanf(ptr, "%d",&c);
    printf("the three integers are %d,%d,and %d", a,b,c);
    fclose(ptr);
    return 0;
}