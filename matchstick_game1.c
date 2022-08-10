# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int  ms=21,p;
    srand(time(0));
    printf("choose no. of matchstick by person : ");
        scanf("%d",&p);
        printf("person chooses %d matchstick\n", p);
        int com= rand()%4+1;
         printf("computer chooses %d no of matchstick\n",com) ;
        ms=ms-p-com;
        printf("%d number of matchsticks remain \n\n", ms);

    do{
          
          if(ms==8 && p==4&& com==4){
           printf("computer lose the game\n person win\n") ;
           break;
       }
         else if(ms==6 && p==2&& com==4){
           printf("computer lose the game\n person win\n") ;
           break;
       }
        if(ms==4){
            printf("choose no. of matchstick by person : ");
        scanf("%d",&p);
        printf("person chooses %d matchstick\n", p);
             if(p==4){
                 com=0;
              printf("no matchstick left\n") ;
              printf("person lose the game\n computer win\n") ;
              break;
             }
             else if(p==3){
                 com= 1;
              printf("computer chooses %d no of matchstick\n",com) ;
               printf("computer lose the game\n person win\n") ;
               break;
             }
             else if(p==2){
                 com= rand()%2+1;
                 if(com==2){
              printf("computer chooses %d no of matchstick\n",com) ;
              printf("computer lose the game\n person win\n") ;
              break;
                 }
                 else if(com==1){
              printf("computer chooses %d no of matchstick\n",com) ;
               printf("person lose the game\n computer win\n") ;
               break;
                 }
            }
             else if(p==1){              
                com= rand()%3+1;
               if(com==3){
              printf("computer chooses %d no of matchstick\n",com) ;
              printf("computer lose the game\n person win\n") ;
              break;
                 }
               else if(com==2){
              printf("computer chooses %d no of matchstick\n",com) ;
              printf("person lose the game\n computer win\n") ;
              break;
                 }
                 else if(com==1){
              printf("choose no. of matchstick by person : ");
              scanf("%d",&p);
              printf("person chooses %d matchstick\n", p);
              printf("computer chooses %d no of matchstick\n",com) ;
               
              if(p==2){
               printf("person lose the game\n computer win\n") ;
               break;

              }
              else{
              printf("computer lose the game\n person win\n") ;
                break;
              }
                 }
             }
        }
        else if(ms==3){
            printf("choose no. of matchstick by person : ");
        scanf("%d",&p);
        printf("person chooses %d matchstick\n", p);
            if(p==3){
                 com= 0;
              printf("no matchstick left\n") ;
              printf("person lose the game\n computer win\n") ;
              break;
             }
             else if(p==2){
                 com= 1;
               
              printf("computer chooses %d no of matchstick\n",com) ;
              printf("computer lose the game\n person win\n") ;
              break;
             }
             else if(p==1){              
                com= rand()%2+1;
               if(com==2){
              printf("computer chooses %d no of matchstick\n",com) ;
              printf("computer lose the game\n person win\n") ;
              break;
                 }
               else {
              printf("computer chooses %d no of matchstick\n",com) ;
              printf("person lose the game\n computer win\n") ;
              break;
                 }
                
        }
        }
        else if(ms==2){
            printf("choose no. of matchstick by person : ");
        scanf("%d",&p);
        printf("person chooses %d matchstick\n", p);
             if(p==2){
                 com= 0;
              printf("no matchstick left\n") ;
              printf("person lose the game\n computer win\n") ;
              break;
             }
             else if(p==1){
                 com= 1;
               
              printf("computer chooses %d no of matchstick\n",com) ;
              printf("computer lose the game\n person win\n") ;
              break;
             }
        }
        else if(ms==1){
            p=1;
            com=0;
            printf("person chooses %d matchstick\n", p);
            printf("no matchstick left\n") ;
             printf("person lose the game\n computer win\n") ;
             break;
        }


        printf("choose no. of matchstick by person : ");
        scanf("%d",&p);
        printf("person chooses %d matchstick\n", p);
        
        int com= rand()%4+1;
         printf("computer chooses %d no of matchstick\n",com) ;
        ms=ms-p-com;
        printf("%d number of matchsticks remain \n\n", ms);
        } while(ms>0);
        return 0;
        }