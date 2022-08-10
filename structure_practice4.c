# include<stdio.h>
# include<string.h>
struct stu{
    int rollno;
    float marks;
    char name[10];
};
int main(){
    struct stu s1,s2, *stu1,*stu2;
    stu1=&s1;
    stu2=&s2;
    printf("enter roll no of student1: ");
    scanf("%d",  &stu1->rollno);
    printf("enter marks of student1 : ");
    scanf("%f", &stu1->marks);
    printf("enter name of student1 : ");
    scanf("%s",&stu1->name);
    printf("enter roll no of student2: ");
    scanf("%d",  &stu2->rollno);
    printf("enter marks of student2 : ");
    scanf("%f", &stu2->marks);
    printf("enter name of student2 :");
    scanf("%s",&stu2->name);
    // printf("enter roll no of student1: ");
    // scanf("%d",  &s1.rollno);
    // printf("enter marks of student1 : ");
    // scanf("%f", &s1.marks);
    // printf("enter name of student1 : ");
    // scanf("%s",&s1.name);
    // printf("enter roll no of student2: ");
    // scanf("%d",  &s2.rollno);
    // printf("enter marks of student2 : ");
    // scanf("%f", &s2.marks);
    // printf("enter name of student2 :");
    // scanf("%s",&s2.name);
    printf("name of student1 : %s\n", stu1->name);
    printf("rollno of student1 : %d\n", stu1->rollno);
    printf("marks of student1 : %.2f\n", stu1->marks);
    printf("name of student2 : %s\n", stu2->name);
    printf("rollno of student2 : %d\n", stu2->rollno);
    printf("marks of student2 : %.2f\n", stu2->marks);
    
    return 0;
}