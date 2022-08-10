// Snake vs. Water: Snake drinks the water hence wins.
// Water vs. Gun: The gun will drown in water, hence a point for water
// Gun vs. Snake: Gun will kill the snake and win.
// In situations where both players choose the same object, the result will be a draw.

# include<stdio.h>
# include<stdlib.h>
# include<time.h>
void snake_water_gun(char j,char sa,char game){
    char a[30]="JYOTI SINGH";
    char b[30]="SAKSHI PANDEY";
    if(game=='s'){
    if(j==game){
      printf(" Snake drinks the water hence %s wins.",a);
    }
    else if(sa==game){
      printf(" Snake drinks the water hence %s wins.",b);
    }
    }
    else if(game=='g'){
    if(j==game){
      printf("Gun will kill the snake and %s win.",a);
    }
    else if(sa==game){
      printf("Gun will kill the snake and %s win.",b);
    }
    }
    else if(game=='w'){
    if(j==game){
      printf("The gun will drown in water, hence a point for %s",a);
    }
    else if(sa==game){
      printf(" The gun will drown in water, hence a point for %s",b);
    }
    }

}
int main(){

char jyoti,sakshi,snake_vs_water='s', gun_vs_snake ='g' , water_vs_gun='w';
srand(time(0));
int number=rand()%100+1;

if(number<33){
 sakshi='s';
}
else if(number >= 33 && number<60){
 sakshi ='g';
  
}
else {
 sakshi='w';
}
printf("choose from :\n1)for snake ,'s' character is used,\n 2)for water ,'w' character is used,\n 3)for gun, 'g' character is used\n\n");

 printf(" the object choosen by sakshi be : %c\n", sakshi);
printf("enter the object choosen by jyoti be : ");
scanf("%c", &jyoti);
// fflush(stdin);
// printf("enter the object choosen by sakshi be : ");
// scanf("%c", &sakshi);

if((jyoti=='s'&& sakshi=='w') || (jyoti=='w'&& sakshi=='s')){
snake_water_gun(jyoti, sakshi,snake_vs_water);
}

else if((jyoti=='s'&& sakshi=='g')||(jyoti=='g'&& sakshi=='s')){
snake_water_gun(jyoti ,sakshi,gun_vs_snake);
}

else if((jyoti=='g'&& sakshi=='w')|| (jyoti=='w'&& sakshi=='g')){
snake_water_gun(jyoti, sakshi,water_vs_gun);
}

else if((jyoti=='s'&& sakshi=='s')|| (jyoti=='w'&& sakshi=='w')|| (jyoti=='g'&& sakshi=='g') ){
    printf(" Both players choose the same object, the result will be a draw.");
}

    return 0;
}