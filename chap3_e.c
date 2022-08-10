# include<stdio.h>

int main(){
    int x=2,y=3,x1,y1,x2,y2,x3,y3,m1,m2,m3;
     scanf("%d %d",&x1,&y1);
     scanf("%d %d",&x2,&y2);
     scanf("%d %d",&x3,&y3);
     printf("if the straight line passes through (x,y) which is (2,3) then ,\n");
     m1=(y-y1)/(x-x1);
     m2=(y-y2)/(x-x2);
     m3=(y-y3)/(x-x3);
     if(m1==m2==m3){
         printf("the all three points (%d,%d),(%d,%d)& (%d,%d) are lies in same straight line.",x1,y1,x2,y2,x3,y3);
     }
     else{
          printf("the all three points (%d,%d),(%d,%d)& (%d,%d) are not lies in same straight line.",x1,y1,x2,y2,x3,y3);
     }

    return 0;
}