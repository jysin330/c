# include<stdio.h>

int main(){
     FILE *str;
     char name[6];
   
    //  ptr=fopen("sample2.txt", "r ");
     str=fopen("sample.txt", "r");
    
    
    if(str==NULL){
        printf("the file doesn't exist.\n");
    }
    else{
    fscanf(str, "%s", name);
    fclose(str);
    printf("%s", name);
}
    return 0;
}