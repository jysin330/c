# include<stdio.h>
//  void print_array(int *ptr,int n){
//     for(int i=0; i<n; i++){
//         printf("the value of arr[%d] is %d\n", i, *(ptr+i));
//     }
//     *(ptr+2)=566;
 void print_array(int ptr[],int n){
    for(int i=0; i<n; i++){
        printf("the value of arr[%d] is %d\n", i, ptr[i]);
    }
    ptr[2]=566;
 }
int main(){
    int arr[]={45,67,98,27,45, 68,45};
    print_array(arr,7);
    printf("the value of arr[2] is %d\n", arr[2]);
    return 0;
}