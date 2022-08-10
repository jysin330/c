# include<stdio.h>
//question 3---->
float change_value(float *a){
     
     *a = (10)*(*a);
     return *a;
}

// question 6----->
// float change_value(float i){
     
//    i = (10)*(i);
//    return i;
//  }
int main(){
    float i=3.2;
    //question 3---->
    float *n=&i;
    printf("the value of i is %.2f \n", i);
    change_value(&i);
    printf("the changed value of i is %.2f \n", *n);

    //question 6----->
    // printf("the value of i is %.2f \n", i);
    // change_value(i);
    // printf("the changed value of i is %.2f \n", i);
    return 0;
}

