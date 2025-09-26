int lengthOfLastWord(char* s) {
    int i=strlen(s)-1;//index of last character in this string s
    while(s[i]==' '){
        i--;
    }
    int size=0;
    while(i>=0 && s[i]!=' '){
        i--;
        size++;
    }
    return size;

}
void swap(char *x, char *y){
    char tmp=*x;
    *x=*y;
    *y=tmp;
}
void reverseString(char* s, int sSize) {
    int i=0;
    int j=sSize-1;
    while(i<j){
        swap(&s[i],&s[j]);
        i++;
        j--;
    }
}