# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr;
    int a=7;
    ptr=(int *)malloc(10* sizeof(int));
    
    for(int i=0;i<10; i++){
       printf("%d*%d=%d\n", a,(i+1), a*(i+1));
    }
    ptr=(int *)realloc(ptr, 15*sizeof(int));
   
    for(int i=0;i<15; i++){
      printf("%d*%d=%d\n", a,(i+1), a*(i+1));
    }
    return 0;
}