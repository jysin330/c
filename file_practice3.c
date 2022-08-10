# include<stdio.h>

int main(){
    FILE *ptr;
    FILE *str;
    char c,d;
    ptr=fopen("generated.txt", "r");
    str=fopen("generated1.txt", "w");
    c= fgetc(ptr);
    while(c!=EOF){
       
        fprintf(str,"%c", c);
      
         c= fgetc(ptr);
    }
    fclose(ptr);
    printf("\n");
    ptr=fopen("generated.txt", "r");
    d= fgetc(ptr);
      fprintf(str,"\n");
    while(d!=EOF){

        fprintf(str,"%c", d);
      
         d= fgetc(ptr);
    }

    return 0;
}