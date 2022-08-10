# include<stdio.h>
int count_num(int *num, int size){
    int count, sum=0;
    for(int i=0; i<size; i++)
    {
        if(*(num+i) >0 ){
              count=1;
        }
        else{
            count=0;
        }
         if(count==1){
        sum+=count;  
    }
    }
    return sum;
}
int main(){
    int num[]={34,-56,98,45,-67,-23,0,67};
    printf("%d numbers are positive numbers in array\n", count_num(num,8));
    
    return 0;
}