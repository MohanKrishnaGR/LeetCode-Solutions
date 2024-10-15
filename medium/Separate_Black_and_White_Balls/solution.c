long long minimumSteps(char* s) {
    long long ans = 0;
    int oneCount = 0;  

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1') {
            oneCount++; 
        } else if (s[i] == '0') {
            ans += oneCount; 
        }
    }

    return ans;
}