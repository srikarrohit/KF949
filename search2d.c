bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    //we have to flatten the 2d array into 1d array
    //and apply binary search
    int col=matrixColSize[0];
    int row=matrixSize;
    int left=0;
    int right=row*col-1;
    //6 -->16
    //6/4-->1;6%4-->2
    while(left<=right){
        int mid=(left+right)/2;
        int mid_value=matrix[mid/col][mid%col];
        if(mid_value==target){
            return true;
        }else if(mid_value<=target){//11<=20
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return false;
}