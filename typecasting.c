#include<stdio.h>
int main(){
    int x=3;
    double y=x;//implicit casting
    double z=4.5;//lost data
    int k=z;
    printf("%d",k);
    int m=3;
    float l=(float)m;//explicit typecasting
}
//stack memory-local variable and functional stack
//heap memory- dynamic memory
//data segment - initialized global and static
//bss segment - uninitialized global and static
//text