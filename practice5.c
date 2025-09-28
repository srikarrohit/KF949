bool isPalindrome(char* s) {
    int left=0;
    int right=strlen(s)-1;
    while(left<right){
        if(!isalnum(s[left])){
            left++;
            continue;
        }else if(!isalnum(s[right])){
            right--;
            continue;
        }else if(tolower(s[left])!=tolower(s[right])){
            return false;
        }else if(tolower(s[left])==tolower(s[right])){
            left++;
            right--;
        }
    }
    return true;
}