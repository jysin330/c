# include<stdio.h>

int main(){
    int rem,n,num,reverse_num=0;
    scanf("%d", &n);
    for(int i=1; i<=5; i++){
    rem=n%10;
    if(i==1)
    num= rem*10000;
    else if(i==2)
    num= rem*1000;
    else if(i==3)
    num= rem*100;
    else if(i==4)
    num= rem*10;
    else if(i==5)
    num= rem;
    n=n/10;
    reverse_num=reverse_num+num;
    }
    printf(" reverse_num=%d", reverse_num);

    // int num, rem;
    // scanf("%d", &num);
    // if(num!=0){
    //     rem=num%10;
    //     printf("%d", rem);
    //     num=num/10;
    //     rem=num%10;
    //     printf("%d", rem);
    //     num=num/10;
    //     rem=num%10;
    //     printf("%d", rem);
    //     num=num/10;
    //     rem=num%10;
    //     printf("%d", rem);
    //     num=num/10;
    //     rem=num%10;
    //     printf("%d", rem);
    //     num=num/10;

    // }
    return 0;


    return 0;
}