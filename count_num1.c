#include<stdio.h>

int total_positive_int(int a[], int n);

int main()
{
    int n, a[n], i, Count;
    printf("enter the number of elements to store in the array:\n ");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0; i<n; i++)
    {
        printf("element- %d:",i);
        scanf("%d",&a[i]);
    }
    Count = total_positive_int(a, n);
    printf("total positive integer in array= %d",Count);
    return 0;
}


int total_positive_int(int a[], int n)
{
    int i, count=0;
 
 for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            count++;
        }

    }
    return count;
}