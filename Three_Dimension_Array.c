# include<stdio.h>

int main(){
    int a[2][3][4];
   int *ptr= a;
    for(int i=0;i<2;i++){
        
        for(int j=0;j<3;j++){
           
        for(int k=0;k<4;k++){
        
        printf("the address of a[%d][%d][%d] is %u\n", i,j,k, &a[i][j][k]);
    }
    }
    }
    return 0;
}
