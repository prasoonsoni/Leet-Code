class Solution {
    public int findDuplicate(int[] nums) {
        Map<Integer, Integer> count = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(count.containsKey(nums[i])){
                count.put(nums[i], count.get(nums[i])+1);
            } else {
                count.put(nums[i], 1);
            }
        }
        Set<Integer> keys = count.keySet();
        for(Integer i : keys){
            if(count.get(i)>1){
                return i;
            }
        }
        return 0;
    }
}