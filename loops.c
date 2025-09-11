#include <stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        printf("%d\n",i);
    }
    //first initialzation i=1
    //condition checking i<=5
    //loop body printf
    //incrementing i

    int j=0;
    while(j<5){
        printf("%d",j);
        j++;
    }
    printf("\n");
    int k=0;
    do{
        printf("%d\n",k);
        k++;
    }while(k<5);

}