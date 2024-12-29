class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minMoves = 0;
        int min = nums[0];
        
        for (int i =0;i<nums.size();i++){
            if (nums[i]<min){
                min = nums[i];
            }
           
        }
        int sum =0;
        for (int n : nums){
            sum += n-min;
        }
        return sum;
    }
};
