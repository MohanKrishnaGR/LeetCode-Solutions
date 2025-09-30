class Solution {
    public int characterReplacement(String s, int k) {
        int left = 0, maxCount = 0, maxLen = 0;
        int[] count = new int[26];
        for(int right = 0; right < s.length(); right++){

            char r = s.charAt(right);
            count[r - 'A']++;
            
            maxCount = Math.max(maxCount, count[r-'A']);

            while((right - left + 1) - maxCount > k){
                char l = s.charAt(left);
                count[l - 'A']--;
                left++;
            }

            maxLen = Math.max(maxLen, right - left + 1);
        }

        return maxLen;
    } 
}
