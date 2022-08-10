# include<stdio.h>

int main(){
    int n_stu=3;
    int n_sub=5;
    int marks[3][5];
    for(int i=0; i<n_stu; i++){
    for(int j=0; j<n_sub; j++){
        printf("enter the marks of student %d in subject %d\n", i+1, j+1);
        scanf("%d", &marks[i][j]);
    }
    }
    printf("\n\n");
    printf("the marks of student in subjects----->\n\n" );
      
        printf("\t\tsubject1\tsubject2\tsubject3\tsubject4\tsubject5\n");
    
    for(int i=0; i<n_stu; i++){
         
    printf("student%d\t", i+1);
    for(int j=0; j<n_sub; j++){
        // printf("the marks of student %d in subject %d is %d\n", i+1, j+1, marks[i][j]);
        printf("%d\t\t",marks[i][j]);
    }
    printf("\n");
    }
    return 0;
}
    