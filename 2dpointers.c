#include <stdio.h>
int main(){
    int *arr[3];//array of pointers..n array of pointers..
    //each pointer in this array points to an int variable
    int a=1,b=2,c=3;
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    for(int i=0;i<3;i++){
        printf("%d\n",*arr[i]);
    }
    int arr1[3]={1,2,3};
    int *ptr=&arr1[0];//pointer to array of integers--pointer to int
    printf("%d\n",ptr[2]);//we can interchange between array and pointer
    int **ptr1=&ptr;//pointer to pointer
    printf("%d\n",**ptr1);
    int ***ptr2=&ptr1;
    printf("%d\n",***ptr2);
    int arr2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*ptr3)[3][4];//2d array of pointers
    ptr3=&arr2;
    printf("%d\n",(*ptr3)[0][1]);
    int *arr3=malloc(5*sizeof(int));//malloc can't be used for arrays
    //it can be only used to allocate a memory and pointer will be pointing to it
    int rows=3;
    int cols=4;
    int **ptr4=malloc(rows*sizeof(int *));
    for(int i=0;i<rows;i++){
        ptr4[i]=malloc(cols*sizeof(int));
    }
}