#include <stdio.h>
void func(); //prototyping
void sit(){//dog can sit
    printf("Dog is sitting");
}
int main(){
    func();
    func();
    func();
    return 0;
}
void func(){
    printf("I'm a function\n");
}