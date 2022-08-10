# include<stdio.h>
# include<math.h>

int main(){

    // qustion 2---->
    // float i;
    // for(float x=5.5; x<=12.5; ){
    //     for(int y=1; y<=6; y++){
    //             i=2+(y+(0.5*x));
    //           printf(" i= 2+(%d+ 0.5*%.2f)=%.2f\n",y,x, i);
    // }
    // x=0.5+x;
    // }

    // question 3---->
    
    
    int p,n;
    float a,r,num,power,q;
    for(int i=1; i<=10;i++)
    {
        printf("enter p%d :",i);
        scanf("%d", &p);
        printf("enter r%d :",i);
        scanf("%f", &r);
        printf("enter n%d :",i);
        scanf("%d", &n);
        printf("enter q%d :",i);
        scanf("%f", &q);
        num=1+(r/q);
        power=n*q;
        a= p*pow(num,power);
        printf(" amount a%d = %f\n",i,a );

    }
    return 0;
}