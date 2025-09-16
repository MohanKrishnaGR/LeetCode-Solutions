import java.util.*;

class Solution {
    public int lengthOfLongestSubstring(String s) {

    if (s == null || s.length() == 0){
        return 0;
    }

    int[] lastIndex = new int[128];
    Arrays.fill(lastIndex, -1);
    int left = 0;
    int maxLen = 0;

    for(int right = 0; right < s.length(); right++){

        char c = s.charAt(right);
        left = Math.max(left, lastIndex[c]+1);
        lastIndex[c] = right;
        maxLen = Math.max(maxLen, right - left + 1); 
    }

    return maxLen;
    }
}
