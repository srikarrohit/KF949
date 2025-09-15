#include <stdio.h>
void func(); //prototyping
void sit(){//dog can sit
    printf("Dog is sitting");
}
int add(int x, int y){// a and b
    x=y;//will a be overwritten as b
    //local variable in add.
    // it takes copies of a and b
    printf("in add %d,%d\n",&x,&y);
    return x+y;
}
int addbyreference(int *x,int *y){
    *x=*y;//dereferencing x and y. 
    //a is overwritten by b
    return *x+*y;
}
void swap(int *x,int *y){
    int temp=*x;//c
    *x=*y;//overwritng c with d
    *y=temp;//overwriting with old value of c
}
int main(){
    func();
    func();
    func();
    int a=3;
    int b=4;
    printf("%d\n",add(a,b));
    printf("in main %d,%d",&a,&b);
    printf("%d %d\n",a,b);
    printf("%d\n",addbyreference(&a,&b));
    printf("%d %d\n",a,b);
    int c=10;
    int d=20;
    swap(&c,&d);
    printf("%d,%d",c,d);
    return 0;
}
void func(){
    printf("I'm a function\n");
}