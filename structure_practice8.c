# include<stdio.h>
# include<string.h>
typedef struct bank_account{
  int account_no;
  int cash;
  char dob[20];
  char name[20];

}ba;
void bank_detail(ba *per){
    for(int i=0; i<2;i++){
 printf("%s\t\t\t%d\t\t\t%d\t\t%s\n", per->name,per->account_no,per->cash, per->dob);
 per++;
    }
}
int main(){
    ba person[2];
    ba *ptr=person;
    for(int i=0; i<=1; i++){
        
       printf("enter the detail of person %d : \n", i+1);
       printf("enter account no : ");
       scanf("%d", &ptr->account_no);
       printf("enter cash : ");
       scanf("%d", &ptr->cash);
       printf("enter dob : ");
       scanf("%s",  &ptr->dob);
       printf("enter name : ");
       scanf("%s",  &ptr->name);
    
       ptr++;
    }
     printf("NAME\t\t\tACCOUNT NO\t\tCASH\t\tDOB\n");

    

         bank_detail(person);
    
    return 0;
}