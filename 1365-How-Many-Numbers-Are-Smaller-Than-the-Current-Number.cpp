class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int> result;
       for (int n : nums){
        int count =0;
        for (int i =0;i<nums.size();i++){
            if (nums[i]<n&& nums[i]!=n){
                count++;
            }
           
        }
         result.push_back(count);
       }
       return result;
      
    }
};
