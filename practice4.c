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
char* toLowerCase(char* s) {
    //what is the difference between character array and a string literal
    //const keyword
    //H--h
    //A - 65
    //a - 97
    //A+32=a
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    return s;

}
bool isAnagram(char* s, char* t) {
    if(strlen(s)!=strlen(t)){
        return false;
    }
    int s_arr[26]={0};
    int t_arr[26]={0};
    for(int i=0;i<strlen(s);i++){
        s_arr[tolower(s[i])-'a']++;
        t_arr[tolower(t[i])-'a']++;
    }
    for(int i=0;i<26;i++){
        if(s_arr[i]!=t_arr[i]){
            return false;
        }
    }
    return true;
}