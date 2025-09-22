#include <stdio.h>
int sumofelements(int arr[3][4],int rows,int cols){
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}
int primarysum(int arr[4][4],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i][i];
    }
    return sum;
}
int secsum(int arr[4][4],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i][size-1-i];
    }
    return sum;
}
int incrow(int arr2[3][4],int cols,int row){
    for(int i=0;i<cols;i++){
        arr2[row][i]++;
    }
}
int main(){
    int arr[4][4];//declare
    //scanf and initialize this array
    int arr1[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    //square matrix
    int arr2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //print 2d array as a matrix
    int rows=4,cols=4;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    //find sum of elements in 2d array
    printf("%d\n",sumofelements(arr2,rows,cols));
    //find sum of primary diagonal elements in 2d array. square matrix
    printf("%d\n",primarysum(arr1,4));
    //secondary diagonal sum
    //0,3-->i,size-1-i
    //1,2-->1 size-2=2
    //2,1-->2 size-3=1
    //3,0
    printf("%d\n",secsum(arr1,4));
    //input is row, increment all elements in this row
    int row;
    int newrows=3,newcols=4;
    printf("Enter row to be incremented");
    scanf("%d",&row);
    incrow(arr2,newcols,row);
    for(int i=0;i<newrows;i++){
        for(int j=0;j<newcols;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
}