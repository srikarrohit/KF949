#include <stdio.h>
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=arr[i];//sorted section is arr[0]. our first key arr[1]
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void swap(int *x,int *y){
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min_idx=i;
        for(int j=i+1;j<size;j++){
            if(arr[min_idx]>arr[j]){
                min_idx=j;
            }
        }
        swap(&arr[i],&arr[min_idx]);
    }
}
int main(){
    int arr[]={9,8,6,0,1,4,5,7};
    int size=sizeof(arr)/sizeof(int);
    selectionSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}