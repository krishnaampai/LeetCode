class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>result;
        for (int i =0;i < nums.size();i++){
            for (int j =0;j<nums.size();j++){
                if (nums[j]>nums[i]){
                    int temp  = nums[j];
                    nums[j]= nums[i];
                    nums[i] = temp;
                }
            }
        }
        for (int i =0; i < nums.size();i++){
            if (nums[i]== target){
                result.push_back(i);
            }
        }
        return result;
    }
};
