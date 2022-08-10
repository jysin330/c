#include<stdio.h>
int func(int a ){
    int prime_num;
    
    // if(a>=1){
      
    // for(int i=2;i<a ; i++){
    //     if(a%i==0){
    //         prime_num=0;
    //     }
    // }
    // if(prime_num==0){
    //     printf("%d is non prime\n",a);
    // }
    
    // else {
    //    printf("%d is prime\n",a);
    // }
    // func(a-1);
    // }
    
    if(a<=20){
        
    for(int i=2;i<a ; i++){
        if(a%i==0){
            prime_num=0;
        }
    }
    if(prime_num==0){
        printf("%d is non prime\n",a);
    }
    
    else {
       printf("%d is prime\n",a);
    }
    func(a+1);
    } 
    
    return 0;
}
int main(){
    // int n, prime_num;
    // scanf("%d",&n);
    // func(n);
    // printf("1 is prime\n");
    // printf("2 is prime\n");
    

    func(1);
    return 0;
}