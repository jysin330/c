# include<stdio.h>

int main(){
    int i=9;
    int *j=&i; // j will now store the value of i
    //*j=*(&i)
    // int **k= &j; 
    printf("the value of i is : %d\n", i);
    printf("the value of i is : %d\n", *j);
    printf("the address of i is : %u\n", &i);
    printf("the address of i is : %u\n", j);
    printf("the address of j is : %u\n", &j);
    printf("the value of j is : %u\n", *(&j));
    return 0;
}