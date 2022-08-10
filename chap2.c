// question A---->
// # include<stdio.h>
// int main(){
//     int n, rem,sum=0;
//     printf("enter the number\n");
//     scanf("%d",&n);

//     while(n!=0)
//     {
//         rem=n%10;
//         sum=sum+(rem);
//         n=n/10;

//     }
//     printf("sum of number is %d",sum);
//     return 0;
// }

// question B---->

// # include<stdio.h>
// # include<math.h>

// int main(){
//     int x,y, degree;
//     float r ,radian, pi=3.14;
//     scanf("%d %d", &x, &y);
//     printf("the cartesian co-ordinates is (%d,%d)\n", x,y);
//     r= sqrt(pow(x,2)+pow(y,2));
//     //for inverse tan use atan
//     radian= atan(x/y);
//     printf("cartesian coordinate into polar coordinate is (%.2f,%.2f)\n", r, radian);
//     //to change radian into degree is degree = radian*180/pi
//     degree = radian*180/pi;
//     printf("cartesian coordinate into polar coordinate is (%.2f,%d)\n", r, degree);
//     return 0;
// }
  
// question C---->

// # include<stdio.h>
// # include<math.h>

// int main(){
//     int L1,L2,G1,G2;
//     float D;
//     scanf("%d %d %d %d", &L1,&L2,&G1,&G2);
//     printf("the value of latitude is (%d,%d) in degree\n", L1,L2);
//     printf("the value of longitude(%d, %d) in degree\n", G1,G2 );
//     D= 3963*acos((sin(L1)*sin(L2))+ (cos(L1)*cos(L2)*cos(G2-G1)));
//     printf("the distance (D) between them in nautical miles is %.2f", D);
//     return 0;
// }

// question E---->

# include<stdio.h>
# include<math.h>

int main(){
    float tr_sin,tr_cos,tr_tan, deg, pi=3.14;
    scanf("%f", &deg);
    // all trignometrical ratios takes angle in radian. For Example: tan(radian), etc
    tr_sin=sin(deg*pi/180);
    tr_cos=cos(deg*pi/180);
    tr_tan=tan(deg*pi/180);
    

    printf("sin(%.2f)=%.2f\n", deg,tr_sin);
    printf("cos(%.2f)=%.2f\n", deg,tr_cos);
    printf("tan(%.2f)=%.2f\n", deg,tr_tan);
    printf("sec(%.2f)=%.2f\n", deg,1/tr_cos);
    printf("cosec(%.2f)=%.2f\n", deg,1/tr_sin);
    printf("cot(%.2f)=%.2f\n", deg,1/tr_tan);
    return 0;
}