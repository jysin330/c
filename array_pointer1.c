# include<stdio.h>

int main(){
    int marks[5];
    int *ptr=&marks[0];
    for(int i=0; i<5; i++){
        printf("enter the marks of student %d\n" ,i+1);
        scanf("%d", ptr);
        ptr++;
    }
    
    for(int i=0; i<5; i++){
        printf(" the marks of student %d is %d\n" ,(i+1), marks[i]);
        
    }
    return 0;
}