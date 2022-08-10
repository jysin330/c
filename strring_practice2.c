# include<stdio.h>
# include<string.h>

int main(){
    char st1[4];
    char st2[1];
    int i=0;
    char c;
    scanf("%s",st1);
    
    while(c!='\n'){
      fflush(stdin);
    scanf("%c",&c);
    st2[i]=c;
    i++;
    }
    st2[i-1]='\0';

    printf("the first name is %s \n",st1);


    printf("the second name is %s \n",st2);
    int val= strcmp(st1,st2);
     printf("no the value is %d.", val);
    return 0;
}