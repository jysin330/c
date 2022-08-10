# include<stdio.h>
int Char_Occurance(char *ptr, char a){
 int i=0,count=0;
//  while(*ptr!='\0'){
 while(ptr[i]!='\0'){
//  while(*(ptr+i)!='\0'){
        // if(*ptr==a){
        if(ptr[i]==a){
        // if(*(ptr+i)==a){
               count=count+1;
        }
        i++;
        // ptr++;
 }
printf("%c = %d time occur",a, count);
return 0;
}
int main(){
    char string[]="ygqkuurjewhludddddddddddddygf";
    char c;
    scanf("%c", &c);
    Char_Occurance(string,c);
    return 0;
}