#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee em1, em2, *ptr1, *ptr2;
    ptr1 = &em1;
    ptr2 = &em2;
    ptr1->code=67;
    // (*ptr1).code=67;
    ptr1->salary=670;
    // (*ptr1).salary=670;
    strcpy(ptr1->name,"jyoti");
    // strcpy((*ptr1).name,"jyoti");
    (*ptr2).code=67;
    (*ptr2).salary=670;
    strcpy((*ptr2).name,"sakshi");
    printf("employee 1 code : %d\n", em1.code);
    printf("employee 1 code : %.2f\n", em1.salary);
    printf("employee 1 code : %s\n", em1.name);
    printf("employee 2 code : %d\n", em2.code);
    printf("employee 2 code : %.2f\n", em2.salary);
    printf("employee 2 code : %s\n", em2.name);

    return 0;
}