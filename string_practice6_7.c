# include<stdio.h>
 void asciiNameDecrypt( char *ptr, char *str){
     int i=0;
     while(*(ptr+i)!='\0'){
         str[i]= ptr[i]-1;

         i++;
     }
     str[i]='\0';
 }
 void asciiNameEncrypt( char *ptr, char *str){
     int i=0;
     while(*(ptr+i)!='\0'){
         str[i]= ptr[i]+1;

         i++;
     }
     str[i]='\0';
 }
int main(){
    char name1[]="jyoti";
    // char *ptr=name1;
    char name2[10];
    char name3[10];
    // char *str=name2;
    asciiNameEncrypt(name1, name2);
    // int i=0;
    //  while(*(ptr+i)!='\0'){
    //      str[i]= ptr[i]+1;

    //      i++;
    //  }
    //  str[i]='\0';
    printf("%s\n", name2);
    asciiNameDecrypt(name2, name3);
    printf("%s", name3);
    return 0;
}