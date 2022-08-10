# include<stdio.h>

int main(){
    FILE *ptr;
    // int i;
    char c[78];
    // printf("enter the number whose multiplication table is generated : ");
    // scanf("%d", &i);
    ptr=fopen("table.txt", "r");
    // ptr=fopen("table.txt", "w");
    // for(int j=0; j<10; j++){
    //     fprintf(ptr, "%d*%d=%d\n", i,(j+1), i*(j+1));
    // }
    
   for(int i=0;i<10;i++){
        fscanf(ptr,"%s", &c);
        printf("%s\n",c);
    
   }
        
   

    return 0;
}