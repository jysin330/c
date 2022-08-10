# include<stdio.h>
void function(int*);
int main(){
    // float a=13.5;
    // float *b,*c;
    // b=&a;
    // c=b;
    // printf("%u %u %u\n",&a,b,c);
    // printf("%f %f %f %f %f",a, *(&a),*&a,*b,*c);
     int i=35,*z;
     z=function(&i);
     printf("%d\n",z);
    return 0;
}
void function(int *m){
    return (*m+2);
}