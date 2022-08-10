# include<stdio.h>
# include<string.h>

int main(){
    int count=0;
    //  char *ptr="jyoti singh";
    //  while(*ptr!='\0'){
    //   count++;
    //   ptr++;
    //  }
     char name[]="jyoti singh";
     char *ptr=name;
     while(*ptr!='\0'){
      count++;
      ptr++;
     }
     printf("%d", count);
    return 0;
}