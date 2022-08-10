# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int num , guess;
    int nguesses=1;
    srand(time(0));
    num = rand()%100 +1;
    // printf("the number is %d\n", num);
    do{
        printf(" guess the number between 1 to 100\n");
        scanf("%d", &guess);

        if(guess>num){
            printf(" lower no. plz!!\n");
        }
        else if(guess<num){
            printf(" higher no. plz!!\n");
        }
        else {
            printf(" u guessed it in %d attempt\n", nguesses);
        }
        nguesses++;
    }while(guess!= num);

    return 0;
}