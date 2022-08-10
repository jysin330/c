# include<stdio.h>
void func1();
void func2();
void func3();
int main(){
    func1();
    // func2();
    // func3();
    
    return 0;
}
void func1(){
    printf("good morning\n");
    func2();
};
void func2(){
    printf("good afternoon\n");
    func3();
};
void func3(){
    printf("good night\n");
};