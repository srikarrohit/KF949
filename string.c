#include <stdio.h>
#include <string.h>
union Data{
    int i;
    float f;
    char str[20];//20 bytes
};
int main(){
    char ch[50];
    strcpy(ch,"Srikar");
    printf("%s\n",ch);
    char ch1[10]={'H','E','L','L','O'};//use single quotes and not double quotes
    printf("%s\n",ch1);
    char ch2[20]="Hello World";
    printf("%s\n",ch2);
    char ch3[10]="Hello Sri";//every string has a \0 character end
    printf("%s\n",ch3);
    printf("%d\n",strlen(ch2));
    printf("%d\n",strcmp(ch,"srikar"));//a-b. so ascii of b is greater than a, so -1
    strcat(ch,"Rohit");
    printf("%s\n",ch);
    char ch5='A';
    printf("%c\n",ch5+1);//character arithmetic
    union Data data;
    data.i=20;
    strcpy(data.str,"Rohit");
    printf("%s\n",data.str);
}