# include<stdio.h>
# include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp1;
// struct employee{
//     int code;
//     float salary;
//     char name[10];
// };
// void func( struct employee em){
 void func( emp1 em){
      em.code=56;
     em.salary=5600;
     strcpy(em.name,"jyoti");
     printf("the code of employee1 be : %d\n", em.code);
     printf("the salary of employee2 be : %.2f\n", em.salary);
     printf("the name of employee1 be : %s\n", em.name);
}
int main(){
    // struct employee emp;
    emp1 emp;
    // emp.code=56;
    //  emp.salary=5600;
    //  strcpy(emp.name,"jyoti");

    func(emp);
    return 0;
}