# include<stdio.h>

int main(){
    FILE *ptr;
    FILE *str;
    char name[6];
    int num;
    int num1;
    ptr= fopen("sample.txt", "r"); //-->for reading the file
    // ptr= fopen("sample.txt", "w");//-->for writing  to the file
    // str= fopen("sample1.txt", "w");//-->for writing  to the file
    
    fscanf(ptr,"%s", name);
    fclose(ptr);
    printf("%s\n", name);
    str= fopen("sample1.txt", "r");//-->for reading  to the file
    fscanf(str,"%d", &num);
    fscanf(str,"%d", &num1);
    fclose(str);
    printf("%d\n", num);
   
    printf("%d\n", num1);
   

    return 0;
}