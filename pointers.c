// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    char ch[10];//stack memory
    
    //0 1 2 3 4
    fgets(ch,sizeof(ch),stdin);
    puts(ch);

    char* ptrchar=ch;//&ch[0]
    //ptrchar=realloc(ptrchar,20*sizeof(char));//heap memory
    printf("%c\n",*ptrchar);
    ptrchar+=3;//pointer arthimetic
    printf("%c",*ptrchar);
    
    char *dynamicarr=malloc(20*sizeof(char));//memory allocated on heap
    //calloc -- initializing the memory to 0
    dynamicarr=realloc(dynamicarr,40*sizeof(char));
    
    

    return 0;
}