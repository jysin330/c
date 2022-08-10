# include<stdio.h>

int main(){
    float income, tax=0;
    printf("enter amt:");
    scanf("%f", &income);
    if(income<250000){
        printf("no tax\n");
    }
    else if(income>=250000 && income<500000){
        printf("tax= %f", tax+ (income-250000)*5/100);
    }
    else if(income>=500000 && income<1000000){
        printf("tax= %f", tax+(income-500000) *20/100);
    }
    else if(income>1000000)
    {
        printf("tax= %f",tax+(income-1000000) *30/100);
    }
    return 0;
}
