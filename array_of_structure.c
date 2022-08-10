# include<stdio.h>
# include<string.h>
struct employee{
    int code;
    float payment;
    char name[10];

};
int main(){
     struct employee fb= {34, 45.6, "jyoti"};
    printf("code of employee be %d\n", fb.code);
    printf("code of employee be %.2f\n", fb.payment);
    printf("code of employee be %s\n", fb.name);
    
    // struct employee fb[]= {34, 45.6, "jyoti", 34, 45.6, "sakshi"};
    // printf("code of employee be %d\n", fb[0].code);
    // printf("code of employee be %.2f\n", fb[0].payment);
    // printf("code of employee be %s\n", fb[0].name);

    // printf("code of employee be %d\n", fb[1].code);
    // printf("code of employee be %.2f\n", fb[1].payment);
    // printf("code of employee be %s\n", fb[1].name);

    // struct employee fb[10];
    //  fb[0].code= 56;
    //  fb[0].payment= 5600.45;
    //  strcpy(fb[0].name, "jyoti");
     
    //  fb[1].code= 5;
    //  fb[1].payment= 5600.45;
    //  strcpy(fb[1].name, "sakshi");

    //  fb[3].code= 90;
    //  fb[3].payment= 5600.45;
    //  strcpy(fb[3].name, "roshni");

    return 0;
}