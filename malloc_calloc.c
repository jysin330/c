# include<stdio.h>
# include<stdlib.h>

int main(){
    // ptr=(float *)malloc(5* sizeof(float));
    // for(int i=0;i<5; i++){
    //     scanf("%f", &ptr[i]);
    // }
    // for(int i=0;i<5; i++){
    //    printf("the value is %f\n", ptr[i]);
    // }
    int *ptr;
    ptr=(int *)malloc(5* sizeof(int));
    for(int i=0;i<5; i++){
        scanf("%d", &ptr[i]);
        // free(ptr);
    }
    for(int i=0;i<5; i++){
       printf("the value is %d\n", ptr[i]);
    }
    ptr=(int *)realloc(ptr, 6*sizeof(int));
    for(int i=0;i<6; i++){
        scanf("%d", &ptr[i]);
        // free(ptr);
    }
    for(int i=0;i<5; i++){
       printf("the value is %d\n", ptr[i]);
    }
    // int n;
    
    // float *ptr;
    // scanf("%d",&n);
    // ptr=(float *)calloc(n, sizeof(float));
    // for(int i=0;i<n; i++){
    //     scanf("%f", &ptr[i]);
    // }
    // for(int i=0;i<n; i++){
    //    printf("the value is %f\n", ptr[i]);
      
    // }
    // float *ptr;
    // ptr=(float *)calloc(5, sizeof(float));
    // for(int i=0;i<5; i++){
    //     scanf("%f", &ptr[i]);
    // }
    // for(int i=0;i<5; i++){
    //    printf("the value is %f\n", ptr[i]);
    // }
    return 0;
}