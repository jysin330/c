# include<stdio.h>
int Char_Occurance(char *ptr, char a){
 int i=0,occurance;
 while(*(ptr+i)!='\0'){
      if(*(ptr+i)==a){
          occurance=1;
      }
 i++;
 }
 if( occurance==1){
     printf("Yes it occur.");
 }
 else{
     printf("No it's not occur.");
 }

return 0;
}
int main(){
    char string[]="ygqkuurjewhludddddddddddddygf";
    char c;
    scanf("%c", &c);
    Char_Occurance(string,c);
    return 0;
}