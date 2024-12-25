class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> numsSet(nums.begin(), nums.end());
        int sum = nums[0];
        for (int i =1;i< nums.size();i++){
            if (nums[i] == nums[i-1] + 1){
                sum = sum  +nums[i];
            }
            else break;
        }

       while(numsSet.find(sum) != numsSet.end()){
        ++sum;
       }

       
       return sum;
    }
};
