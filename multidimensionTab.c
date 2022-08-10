# include<stdio.h>
int multplication(int num){
    int i=0;
    int MulTable[1][10];
    if(i<3){
        for(int j=0; j<10;j++){
          MulTable[i][j] = num*(j+1);
        printf("\t%d\t",MulTable[i][j]);
    }
     i++;
     }
}
int main(){
    // int n,num;
    // printf("enter the no. of rows : ");
    // scanf("%d",&n);
    // int MulTable[n][10];
    // for(int i=0; i<n;i++)
    //     { 
    //         printf("no.");
    //         scanf("%d",&num);
    //         printf("\t");
    //     for(int j=0; j<10;j++){
    //       MulTable[i][j] = num*(j+1);
    //     printf("%d\t",MulTable[i][j]);
    // }
    // printf("\n");
    // }
    int n,a,b,c;
    // printf("enter the no. of rows : ");
    // scanf("%d",&n);
     printf("the multiplication of  ");
    scanf("%d %d %d",&a,&b,&c);
    multplication(a);
     printf("\n ");
    multplication(b);
    printf("\n ");
    multplication(c);
    return 0;
}