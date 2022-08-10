# include<stdio.h>
// float sum(float *a, float *b){
//      float sum ;
//      sum = *a + *b;
//      return sum;
// }
// float avg(float *a, float *b){
//      float avg;
//      float sum;
//      sum = *a + *b;
//      avg = sum/2;
//      return avg;
// }
void sum_avg(float a, float b,float *sum, float *avg){
     
     *sum = a+b;
     *avg = (*sum)/2;
}
int main(){
    float x=34.2, y=23.3, sum, avg;
    //float *l=&x, *k=&y;
    // printf("the sum of x and y is %.2f\n", sum(&x, &y));
    // printf("the average of x and y is %.2f\n", avg(&x, &y));
    sum_avg(x,y,&sum, &avg);
    printf("the sum of x and y is %.2f\n", sum);
    printf("the average of x and y is %.2f\n", avg);
    return 0;
}