# include<stdio.h>

int main(){
    int age1,age2,age3;
    printf("enter ram age : ");
    scanf("%d", &age1);
    printf("enter shyam age : ");
    scanf("%d", &age2);
    printf("enter ajay age : ");
    scanf("%d", &age3);
    if(age1<age2){
        if(age1<age3){
            printf(" ram is youngest.\n");
        }
        
    }
    else if(age2<age1){
        if(age2<age3){
            printf(" shyam is youngest.\n");
        }
        
    }
    else{
            printf(" ajay is youngest.\n");
        }
        
    
    return 0;
}