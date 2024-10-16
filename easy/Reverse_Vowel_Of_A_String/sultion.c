bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

char* reverseVowels(char* s) {
    int left = 0, right = strlen(s) - 1;

    while(left < right){

        while(left < right && !isVowel(*(s+left))){
            left++;
        }
    
        while(left < right && !isVowel(*(s+right))){
            right--;
        }

        if(left<right){
            char temp = *(s+left);
            *(s+left) = *(s+right);
            *(s+right) = temp;

            left++; right--;
        }
    }

    return s;
}