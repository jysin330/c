# include<stdio.h>
# include<math.h>
// float func(float a);
int main(){
    float side;
    printf("the side of square is : ");
    scanf("%f",&side);
    printf("area of square is %.2f", pow(side,2));
    // printf("the area of square is : %f\n", func(3));
    return 0;
}
// float func(float a){
//     float area; 
//     area = a*a;
   
//     return area;
// }