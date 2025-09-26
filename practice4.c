void swap(char *x,char *y){
    char tmp=*x;
    *x=*y;
    *y=tmp;
}
void reverse(char *s, int i, int j){
    while(i<j){
        swap(&s[i],&s[j]);
        i++;
        j--;
    }
}
char* reverseStr(char* s, int k) {
    int count=0;
    int len=strlen(s);
    for(int i=0;i<len;i+=2*k){
        if(i+k<len){
            reverse(s,i,i+k-1);
        }else{
            reverse(s,i,len-1);
        }
    }
    return s;
}