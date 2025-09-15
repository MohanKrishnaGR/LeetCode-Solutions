import java.util.*;

class Solution {
    public String minWindow(String s, String t) {
        if (s == null || t == null || s.length() < t.length()){
            return "";
        }        

        int[] need = new int[128];
        for(char c : t.toCharArray()){
            need[c]++;
        }

        int required = 0;
        for (int i = 0; i < 128; i++){
            if(need[i] > 0) required++;
        }

        int[] window = new int[128];
        int formed = 0;
        int left = 0, right = 0;
        int minLen = Integer.MAX_VALUE;
        int minLeft = 0;

        for(right = 0; right < s.length(); right++){
            char c = s.charAt(right);
            window[c]++;

            if (need[c] > 0 && window[c] == need[c]) {
                formed++;
            }

            while(formed == required){

                int windowLen = right - left + 1;
                if (windowLen < minLen) {
                    minLen = windowLen;
                    minLeft = left;
                }

                char chLeft = s.charAt(left);
                window[chLeft]--;
                if (need[chLeft] > 0 && window[chLeft] < need[chLeft]){
                    formed--;
                }
                left++;
            }

        }
        return (minLen == Integer.MAX_VALUE) ? "" : s.substring(minLeft, minLeft + minLen);
    }
}
