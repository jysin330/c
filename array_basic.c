# include<stdio.h>

int main(){
    //naive way to creat 4 int
    // int marks1,marks2,marks3,marks4;
    // marks1=93;
    // marks2=83;
    // marks3=73;
    // marks4=53;
    int marks[4];//allocate the space of 4 digit
    // marks[0]=93;
    // marks[1]=83;
    // marks[2]=73;
    // marks[3]=53;
    printf("enter the value of marks of student 1\n");
    scanf("%d", &marks[0]);
    printf("enter the value of marks of student 1\n");
    scanf("%d", &marks[1]);
    printf("enter the value of marks of student 1\n");
    scanf("%d", &marks[2]);
    printf("enter the value of marks of student 1\n");
    scanf("%d", &marks[3]);
    printf("you have enter %d ,%d, %d, and %d ",marks[0],marks[1],marks[2],marks[3]);
    
    return 0;
}