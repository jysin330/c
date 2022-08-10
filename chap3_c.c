# include<stdio.h>

int main(){
    int ang1,ang2,ang3 ,sum;
    scanf("%d", &ang1);
    scanf("%d", &ang2);
    scanf("%d", &ang3);
    sum = ang1+ang2+ang3;
    if(sum==180){
        printf("triangle is valid");
    }
    else{
        printf("triangle is not valid");
    }
    return 0;
}