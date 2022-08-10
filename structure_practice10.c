# include<stdio.h>
typedef struct time{
       int hour;
       int min;
       int sec;

}sd;
sd sakshipaglet(sd str1, sd str2){
      
      
      printf(" %d:%d:%d.\n ", str1.hour, str1.min, str1.sec);
      printf(" %d:%d:%d.\n ", str2.hour, str2.min, str2.sec);
      
     

}
int compare(sd time1,sd time2){
    
    if(time1.hour==time2.hour && time1.min==time2.min && time1.sec==time2.sec){
        return 0;
    }
    else if(time1.hour>time2.hour || time1.min>time2.min || time1.sec>time2.sec ){
        return 1;
    }
    else if(time1.hour<time2.hour || time1.min<time2.min || time1.sec<time2.sec){
        return -1;
    }

}
int main(){
    sd time1,time2;
    
   
        printf("enter hour : ");
        scanf("%d", &time1.hour );
        printf("enter minute: ");
        scanf("%d", &time1.min );
        printf("enter second: ");
        scanf("%d", &time1.sec );
        printf("enter hour  : ");
        scanf("%d", &time2.hour );
        printf("enter minute: ");
        scanf("%d", &time2.min );
        printf("enter second : ");
        scanf("%d", &time2.sec );
      
    
    sakshipaglet(time1,time2);
    int val = compare(time1,time2);
    printf("the camparison value be %d", val);
    return 0;
}
