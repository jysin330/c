# include<stdio.h>
# include<string.h>

int check(char ptr[],char str[],int size){
    int count=0;
     for(int i=0;i<size;){
         if(ptr[i]==str[i]){
             i++;
             count++;
         }
         else{
             printf("password incorrect\n");
          i=size;
         }
        
     }
     return count;
}
int main(){
    char password[6]="jyoti";
    char pass[6];
    printf("enter password : ");
    scanf("%s",pass );
   
     int count=check(&password[0],&pass[0],6);
    //  printf("%d",count);
    if(count==6){
        printf("sucessful password\n");
        printf("my name is jyoti \n");
    }
     
    // if(strcmp(password,"jyoti")==0){

    //     printf("sucessful password\n");
    //     printf("my name is jyoti \n");
    // }
    // else{
    //      printf("incorrect password\n\n");
    // }
     
    return 0;
}