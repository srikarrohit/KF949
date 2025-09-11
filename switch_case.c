#include<stdio.h>
int main(){
    int day=2;
    switch(day){
        case 1:
            printf("Sunday");
        case 2:
            printf("Monday");
        case 3:
            printf("Tuesday");
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid day");
            break;
    }
    return 0;
}