# include<stdio.h>
void str_cpy(char *ptr, char *str){
      int i=0;
     
      while(*(str+i)!='\0'){
          ptr[i]=str[i];
        // *(ptr+i)=*(str+i);
          i++;
        
      }
      ptr[i]='\0';
    
}
int main(){
    char name1[]="jyoti";
    char name2[10];
    str_cpy(name2, name1);
     printf("%s", name2);
    return 0;
}