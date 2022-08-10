# include<stdio.h>

int main(){
    int i=34;
    int *ptr1=&i;
    int j=34;
    int *ptr2=&j;
    // ptr=ptr+3;
    // printf("the value of ptr is %u\n", ptr);
    // ptr=ptr-2;
    // printf("the value of ptr is %u\n", ptr);
     printf("the value of ptr1 is %u\n", ptr1);
     printf("the value of ptr2 is %u\n", ptr2);

    //  ptr2=ptr2+2;
    //  ptr1=ptr1+6;
    printf("the difference between two pointer is %d\n", (ptr1-ptr2) );
    printf("the comparison between two pointer is %d\n", (ptr1<ptr2) );
    printf("the comparison between two pointer is %d\n", (ptr1>ptr2) );
    printf("the comparison between two pointer is %d\n", (ptr1==ptr2) );
    printf("the comparison between two pointer is %d\n", (ptr1==ptr1) );
    

    return 0;
}