# include<stdio.h>
typedef struct date{
       int date;
       int month;
       int year;

}sd;
sd sakshipaglet(sd str1, sd str2){
      
      
      printf(" jyoti birthday on %d/%d/%d.\n ", str1.date, str1.month, str1.year);
      printf(" sakshi birthday on  %d/%d/%d.\n ", str2.date, str2.month, str2.year);
      
     

}
int compare(sd date1,sd date2){
    
    if(date1.date==date2.date && date1.month==date2.month && date1.year==date2.year){
        return 0;
    }
    else if(date1.date>date2.date || date1.month>date2.month || date1.year>date2.year ){
        return 1;
    }
    else if(date1.date<date2.date || date1.month<date2.month || date1.year<date2.year){
        return -1;
    }

}
int main(){
    sd date1,date2;
    
   
        printf("enter the day : ");
        scanf("%d", &date1.date );
        printf("enter the month: ");
        scanf("%d", &date1.month );
        printf("enter the year : ");
        scanf("%d", &date1.year );
        printf("enter the day : ");
        scanf("%d", &date2.date );
        printf("enter the month: ");
        scanf("%d", &date2.month );
        printf("enter the year : ");
        scanf("%d", &date2.year );
      
    
    sakshipaglet(date1,date2);
    int val = compare(date1,date2);
    printf("the camparison value be %d", val);
    return 0;
}
