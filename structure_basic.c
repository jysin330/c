//   dot(.) is called as member operator.



#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){

    struct employee e1, e2;
    printf("enter name: ");
    scanf("%s", e1.name);

    printf("enter code: ");
    scanf("%d", &e1.code);
    printf("enter salary: ");
    scanf("%f", &e1.salary);
    // fflush(stdin);

    printf("enter code: ");
    scanf("%d", &e2.code);
    printf("enter salary: ");
    scanf("%f", &e2.salary);
    // fflush(stdin);
    
    printf("enter name: ");
    scanf("%s", e2.name);
    
    return 0;
}