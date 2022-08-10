# include<stdio.h>
# include<string.h>

int main(){
    FILE *ptr;
    // ptr = fopen("student.txt", "w");
    // fprintf(ptr, "NAME            age\n");
   
    // fprintf(ptr, "JYOTI SINGH     20\n" );
    // fprintf(ptr, "Skashi pagal    80\n" );
    // fprintf(ptr, "Abhijeet singh  18\n");
    // fprintf(ptr, "Roshni singh    20\n" );
    ptr = fopen("student.txt","r");
    char c=fgetc(ptr);
     while(c!=EOF)
    {
        
    while(c!='\n'){
         if(c!='\n'){
        printf("%c",c);
     }
       else{
        printf("\n");
     }
        }
         c=fgetc(ptr);
    }
     
    // while(c!=EOF)
    // {
    //    if(c!='\n'){
    //     printf("%c",c);
    //  }
    //    else{
    //     printf("\n");
    //  }

    //     c=fgetc(ptr);
   
    // }

    return 0;
}