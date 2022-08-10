# include<stdio.h>
# include<string.h>
void slice(char *ptr, int m, int n){
    int i=0;
    while((m+i)<n){
         ptr[i]=ptr[(i+m)];
        i++;
    }
    ptr[i]= '\0';
}
int main(){
    char name1[]= "AhgsdgShakshihhuwhqg ";
    char name2[]= "AshhjjsPaglethqg ";
    slice(name1, 6,13);
    printf("First word you select from the name1 string be %s.\n", name1);
    slice(name2, 7,13);
    printf("Second word you select from the name2 string be %s.\n", name2);
    strcat(name1, name2);
    printf("Hence the origin of pagalpanthi starts from the name %s.\n", name1);
    return 0;
}