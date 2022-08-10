# include<stdio.h>
int strlen(char *str){
    int len=0;
    char *ptr=str;
    while(*ptr!= '\0'){
       len++;
        ptr++;
    }
    // int i=0,len=0;
    // while(*(str+i)!= '\0'){
    //    len++;
    //    i++;
    // }
    return len;
}
int main(){
    char name[]= "jyoti";
    int len= strlen(name);
    printf("the length of name is %d ", len);
    return 0;
}