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