class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // i/p array of nums
        // o/p: number that appears only once . 
        // logic: XOR gives 1 for diff numbrs. so for same numbers it gives 0.
        // x ^ 0 = x
        // x^x = 0
        int ans = 0;
        for(int i =0;i < nums.size();i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};