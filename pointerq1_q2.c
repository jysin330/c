# include<stdio.h>
void func(int a);
int main(){
    // question 1-->
    int i=89;
    int *j= &i;
    printf("the address of i is %u\n",j);
    printf("the value of i is %d\n",*j );
    
     // question 2-->
    func(i);
    return 0;
}
void func(int a){
    printf("the address of a is %u\n", &a);
    
}