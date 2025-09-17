#include <stdio.h>
#include<stdlib.h>
void plusOne(int arr[5]){
    for(int i=0;i<5;i++){
        arr[i]+=1;
    }
}
int linearSearch(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int iterativeBinSearch(int arr[],int key,int size){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<=key){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return -1;
}
int recursiveBinSearch(int arr[],int left,int right,int key){
    if(left>right){
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]<=key){
        return recursiveBinSearch(arr,mid+1,right,key);
    }else{
        return recursiveBinSearch(arr,left,mid-1,key);
    }
}
//insertion and deletion into array
void insertElement(int arr[],int key,int idx,int size,int newArray[]){
    for(int i=0;i<idx;i++){
        newArray[i]=arr[i];
    }
    newArray[idx]=key;
    for(int i=idx+1;i<size+1;i++){
        newArray[i]=arr[i-1];
    }
}
int* insertElementUsingHeap(int arr[],int key,int idx,int size){
    int *newArray=malloc(6*sizeof(int));
    for(int i=0;i<idx;i++){
        newArray[i]=arr[i];
    }
    newArray[idx]=key;
    for(int i=idx+1;i<size+1;i++){
        newArray[i]=arr[i-1];
    }
    return newArray;
}
void deleteElement(int arr[],int idx,int size,int newArray[]){
    for(int i=0;i<idx;i++){
        newArray[i]=arr[i];
    }//1 2 3 4 5
    for(int i=idx;i<size-1;i++){
        newArray[i]=arr[i+1];
    }
}
int* deleteElementUsingHeap(int arr[],int idx,int size){
    int *newArray=malloc(4*sizeof(int));
    for(int i=0;i<idx;i++){
        newArray[i]=arr[i];
    }
    for(int i=idx;i<size-1;i++){
        newArray[i]=arr[i+1];
    }
    return newArray;
}
int main(){
    int arr[5];
    arr[0]=1;//->2
    arr[1]=2;//->3
    arr[2]=3;//->4
    arr[3]=4;
    arr[4]=5;
    int arr1[]={1,2,3,4,5};//one way of init
    int *arr2=malloc(10*sizeof(int));//dynamic array
    //plusOne(arr,5);//&arr[0]
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n%d\n",linearSearch(arr,4,5));
    printf("%d\n",iterativeBinSearch(arr,3,5));
    printf("%d\n",recursiveBinSearch(arr,0,4,5));
    int array[]={9,3,4,5,6};
    plusOne(array);
    for(int i=0;i<5;i++){
        printf("%d\t",array[i]);
    }//will this array be updated
    int newArray[6];
    printf("\n");
    insertElement(array,8,3,5,newArray);
    for(int i=0;i<6;i++){
        printf("%d\t",newArray[i]);
    }
    int *newArrayPtr=insertElementUsingHeap(array,8,3,5);
    printf("\n");
    for(int i=0;i<6;i++){
        printf("%d\t",*(newArrayPtr+i));
    }
    int array1[]={1,2,3,4,5};
    int newarray1[4];
    deleteElement(array1,3,5,newarray1);
    printf("\n");
    for(int i=0;i<4;i++){
        printf("%d\t",newarray1[i]);
    }
    int *newarray2=deleteElementUsingHeap(array1,3,5);
    printf("\n");
    for(int i=0;i<4;i++){
        printf("%d\t",newarray2[i]);
    }
}