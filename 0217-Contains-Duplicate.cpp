class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int>umap;
        for (int n: nums){
            umap[n]++;
        }
        for (int n : nums){
            if (umap[n]>1){
                return true;
            }
        }
        return false;
    }
};