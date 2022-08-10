# include<stdio.h>
# include<math.h>
int sum_avg_stdeviation(int *sum,float *mean,float *stdv){
    int n1,n2,n3;
    printf("enter the no. of elements : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    *sum=n1+n2+n3;
    *mean = *sum/3;
    *stdv= sqrt((pow((n1-*mean),2)+pow((n2-*mean),2)+pow((n3-*mean),2))/3);
    printf("the sum of number is %d\n", *sum);
    printf("the mean of number is %f\n", *mean);
    printf("the standard deviation of number is %f\n", *stdv);

}
int main(){
        
        int sum;
        float stdv,mean;
        sum_avg_stdeviation(&sum,&mean,&stdv);


    return 0;
}