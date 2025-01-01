class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        vector<int> a(nums.size()+1,0);
        for (int n : nums){
            a[n]++;
        }
        for (int i =1;i<=nums.size();i++){
            if (a[i]==0){
                result.push_back(i);
            }
        }
        return result;
    }
};
