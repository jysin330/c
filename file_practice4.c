# include<stdio.h>

int main(){
    FILE *ptr;
    int salary1;
    int salary2;
    char name1[30];
    char name2[30];
    scanf("%d",&salary1);
    scanf("%d",&salary2);

    scanf("%s",&name1);
    scanf("%s",&name2);

    ptr=fopen("salary.txt", "w");
    fprintf(ptr,"%s,%d\n",name1, salary1 );
    fprintf(ptr,"%s,%d\n",name2, salary2 );
    return 0;
}