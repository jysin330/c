# include<stdio.h>
# include<string.h>

int main(){

    // use of strlen(string name) ---->use to count lenght of string
    char name[]="jyoti singh";
    int len=strlen(name);
    printf("%d", len);
    
    // use of strcpy(copyname, stringname) ---->use to copy string value
    // char name[]="jyoti singh";
    // char name1[20];
    //  strcpy( name1, name);
    //  printf("%s", name1);

    // use of strcat(stringname1, stringname2) ---->use to concatinate(add) two strings
    // char st1[11]="jyoti ";
    // char st2[12]="singh ";
    // strcat(st1,st2);
    // strcat(st2,st1);
    // printf("%s", st1);
    // printf("%s", st2);

    // use of strcmp(stringname1, stringname2) ---->use to compare two strings
    // char st1[]="jyoti";
    // char st1[]="for";
    // char st2[]="Joke";
    // // char st2[]="singh";
    // char *st2="singh";
    //  int val=strcmp(st1,st2);
    //  printf("no the value is %d.", val);


    return 0;
}