#include <stdio.h>
#include<stdlib.h>
void plusOne(int arr[],int size){
    for(int i=0;i<size;i++){
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
int main(){
    int arr[5];
    arr[0]=1;//->2
    arr[1]=2;//->3
    arr[2]=3;//->4
    arr[3]=4;
    arr[4]=5;
    int arr1[]={1,2,3,4,5};//one way of init
    int *arr2=malloc(10*sizeof(int));//dynamic array
    plusOne(arr,5);//&arr[0]
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n%d\n",linearSearch(arr,4,5));
    printf("%d\n",iterativeBinSearch(arr,3,5));
    printf("%d\n",recursiveBinSearch(arr,0,4,5));
}