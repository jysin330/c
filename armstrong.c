# include<stdio.h>

int main(){
    int a,b,sum=0, r;
    scanf("%d", &a);
    r=a;
    while(a>0){
        b=a%10;
        sum= sum+(b*b*b);
        a=a/10;
    }
    if(r==sum){
        printf("armstrong number");
    }
    else{
        printf("not an armstrong number");
    }
    return 0;
}