int maxVowels(char* s, int k) {
        int maxi=INT_MIN;
        int count=0;
        
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
        }
        maxi = (maxi > count) ? maxi : count;
           
        for(int i=k;i<strlen(s);i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u'){
                count--;
            } 
                maxi = (maxi > count) ? maxi : count;
        }
       return maxi; 
}