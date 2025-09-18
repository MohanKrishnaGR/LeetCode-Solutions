class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        
        List<Integer> result = new ArrayList<>();
        if(s == null || s.length() == 0 || p == null || p.length() == 0  || p.length() > s.length()){
            return result;
        }

        int required = p.length();
        int[] count = new int[26];
        for (char c : p.toCharArray()){
            count[c - 'a']++;
        }

        for (int right = 0, left = 0; right < s.length(); right++){
            
            char r = s.charAt(right);
            if(count[r - 'a'] > 0){
                required--;
            }
            count[r - 'a']--;

            if(required == 0){
                result.add(left);
            }

            if(right - left + 1 == p.length()){
                char l = s.charAt(left);
                if(count[l - 'a'] >= 0){
                    required++;
                }
                left++;   
                count[l - 'a']++;
            }
 
        }

        return result;

    }
}
