# include<stdio.h>

int main(){
    FILE *ptr;
    FILE *str;
    str=fopen("alphabate1.txt", "w");
    // ptr=fopen("alphabate.txt", "w");
    ptr=fopen("alphabate.txt", "r");
    // fprintf(ptr," my name is jyoti singh.\n sakshi name is paglet.");
    char c=fgetc(ptr);
    while(c!=EOF){
   
       if(c>=97 && c<=122){
            c=c-32;
    fprintf(str, "%c", c);

    
        }
        else if(c==' '){
            fprintf(str, " ");
        }
        else if(c=='.'){
            fprintf(str, ".");
            fprintf(str, "\n");
        }
    c=fgetc(ptr);

    }
    fclose(ptr);
    fclose(str);

    return 0;
}