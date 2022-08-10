# include<stdio.h>
    // struct complex{
    // int x;
    // int y;
    // };
    // void display(struct complex a,struct complex b,struct complex c,struct complex d,struct complex e){
    //   printf("complex no 1 = %d+i%d\n", a.x,a.y);
    //   printf("complex no 2 = %d+i%d\n", b.x,b.y);
    //   printf("complex no 3 = %d+i%d\n", c.x,c.y);
    //   printf("complex no 4 = %d+i%d\n", d.x,d.y);
    //   printf("complex no 5 = %d+i%d\n", e.x,e.y);
       
    // }
    typedef struct complex{
    int real;
    int complex;
}comp;

void display(comp c)
{
    printf("the value of real part is %d\n",c.real);
    printf("the value of imaginary part is %d\n",c.complex);
   
}
int main(){
    // struct complex c1,c2,c3,c4,c5;
    // scanf("%d", &c1.x);
    // scanf("%d", &c1.y);
    // scanf("%d", &c2.x);
    // scanf("%d", &c2.y);
    // scanf("%d", &c3.x);
    // scanf("%d", &c3.y);
    // scanf("%d", &c4.x);
    // scanf("%d", &c4.y);
    // scanf("%d", &c5.x);
    // scanf("%d", &c5.y);
    // display(c1,c2,c3,c4,c5);
    comp cnums[5];
    for(int i=0; i<5; i++)
    {
        printf("enter the real value for %d num\n", i+1);
        scanf("%d", &cnums[i].real);

        printf("enter the complex value for %d num\n",i+1);
        scanf("%d",& cnums[i].complex);
    }
for(int i=0; i<5; i++){
    display(cnums[i]);
    }


    return 0;
}