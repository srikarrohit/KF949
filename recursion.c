#include<stdio.h>
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    printf("%d\n",fib(5));
    printf("%d",fact(5));
    return 0;
}
//0,1,1,2,3,5
//fib[n]=fib[n-1]+fib[n-2]
//fact(5)=5*4*3*2*1;
//fact(5)=5*fact(4)
//fact(n)=n*fact(n-1)