# include<stdio.h>
int reverse_arr(int *ptr, int n){
    int temp;
     for(int i=0; i<5;i++){
                temp=*(ptr+i);
                *(ptr+i)= *(ptr+(n-1));
                *(ptr+(n-1))=temp;
                n--;
        }
}
int main()
{
    // int i, n,a[n];
    // printf("enter the number of elements to store in the array:\n ");
    // scanf("%d",&n);
    // printf("enter the elements:\n");
    // for(i=0; i<n; i++)
    // {
    //     printf("element- %d:",i);
    //     scanf("%d",&a[i]);
    // }
    // printf("elements in the array in reverse order are:\n");
    // for(i=n-1; i>=0; i--)
    // {
    //     printf("%d\t",a[i]);
    // }
    
    int arr[10]={45,87,20,90,80,56,78,20,10,67};
    reverse_arr(arr,10);
    for(int i=0; i<10;i++){
    printf("arr[%d]=%d\n",i, arr[i]);
    }
    return 0;
}


 