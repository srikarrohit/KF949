#include <stdio.h>
#include <string.h>
#include <limits.h>
void printEven(int arr[],int size){
    for(int i=0;i<size;i+=2){
        printf("%d\t",arr[i]);
    }
}
void printEvenNums(int arr[],int size){
    for(int i=0;i<size;i++){//to iterate over every element
        if(arr[i]%2==0){//modulo gives remainder
            printf("%d\t",arr[i]);
        }
    }
}
void printOddNums(int arr[],int size){
    for(int i=0;i<size;i++){//to iterate over every element
        if(arr[i]%2==1){//modulo gives remainder
            printf("%d\t",arr[i]);
        }
    }
}
int sumOfNumbers(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){//to iterate over every element
        sum+=arr[i];
    }
    return sum;
}
double avg(int sum, int size){
    double avg=(double)sum/size;
    return avg;
}
typedef struct{
    int sum;
    double avg;
}output;
output calc(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){//to iterate over every element
        sum+=arr[i];
    }
    double avg=(double)sum/size;
    output ans;
    ans.sum=sum;
    ans.avg=avg;
    return ans;
}
int min(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){//5<INT_MAX
            min=arr[i];
        }
    }
    return min;
}
int max(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){//5>INT_MIN
            max=arr[i];
        }
    }
    return max;
}
typedef struct{
    int min;
    int max;
}limits;
limits returnlimits(int arr[], int size){
    int min1=min(arr,size);
    int max1=max(arr,size);
    limits ans;
    ans.min=min1;
    ans.max=max1;
    return ans;
}
struct Person{
    int age;
    char name[20];
};
typedef struct{
    int age;
    char name[20];
}Dog;
//return sum and avg using a single function
int main(){
    //print even indexed numbers in an array
    int arr[]={9,4,1,8,3,2};
    //4 8 2
    // divide by 2: no remainder left 0
    int size=sizeof(arr)/sizeof(int);
    printEven(arr,size);
    //print even numbers in this array
    printf("\n");
    printEvenNums(arr,size);
    //print odd numbers in this array
    printf("\nThe odd numbers are: ");
    printOddNums(arr,size);
    //find sum of all elements in an array
    int sum=sumOfNumbers(arr,size);
    printf("\nThe sum of all numbers is: %d",sum);
    printf("\nThe average of numbers is: %f",avg(sum,size));
    struct Person person1;
    person1.age=20;
    strcpy(person1.name,"Srikar");
    printf("\nPerson age is: %d, name is %s",person1.age,person1.name);
    Dog dog1;
    dog1.age=3;
    strcpy(dog1.name,"Snoofy");
    printf("\nDog age is: %d, name is %s",dog1.age,dog1.name);
    int arr1[]={3,5,1,9,4,2};
    int size1=sizeof(arr1)/sizeof(int);
    output out=calc(arr1,size1);
    printf("\nThe sum of the array is: %d, avg is %f",out.sum,out.avg);
    //write a program to return max and min value using struct
    limits ans=returnlimits(arr1,size1);
    printf("\nThe min element is: %d and max element is %d",ans.min,ans.max);
    //0 0 0 1 1 2 3
    //count occurences of this array and store the occurences in another array.
    //Array elements are consecutive and less than or equal to the max element.
    // 0 1 2 3
}