# include<stdio.h>

int main(){
    int i= 51615,rem, num=0;
    rem= i%10;
    if(rem==5){
        num=num+ rem*10000;
        i=i/10;
        rem=i%10;
        if(rem==1){
             num= num+ rem*1000;
             i=i/10;
             rem=i%10;
             if(rem==6){
                num= num+ rem*100;
                 i=i/10;
                 rem=i%10;
                   if(rem==1){
                        num= num+ rem*10;
                        i=i/10;
                        rem=i%10;
                            if(rem==5){
                               num= num+ rem;
             }
             }
             }

        }
    }
    printf("the reverse number be %d\n", num);
    i=51615;
    if(i==num){
        printf("both are same");
    }
    else{
        printf("both are not same");
    }
   
    return 0;
}