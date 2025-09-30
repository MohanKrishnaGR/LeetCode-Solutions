class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        int left = 0;
        long maxSum = 0, sum = 0;
        HashMap<Integer, Integer> map = new HashMap<>();

        for(int right = 0; right < nums.length; right++ ){
            sum += nums[right];
            map.put(nums[right], map.getOrDefault(nums[right], 0)+1);

            while(map.get(nums[right]) > 1){
                map.put(nums[left], map.get(nums[left]) - 1);
                sum -= nums[left];
                left++;
            }
            
            if(right - left + 1 == k){
                maxSum = Math.max(maxSum, sum);

                map.put(nums[left], map.get(nums[left])-1);
                sum -= nums[left];
                left++;            
            }
        }

        return maxSum;
    }
}
