char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1), len2 = strlen(str2);

    if (len1 < len2) return gcdOfStrings(str2, str1);

    if (!strcmp(str1, str2)) return str1;
    
    if (str1[0] != str2[0]) return "";

    for(int i=0;i<len2;i++){
        if(str1[i]!=str2[i])
        return "";
    }

    return gcdOfStrings(str1 + len2, str2);
}