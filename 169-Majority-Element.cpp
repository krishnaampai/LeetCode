class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int >umap;
        for (int n : nums){
            umap[n]++;
        }
        int n = nums.size();
        n = n/2;
        for (const auto& pair : umap){
            if (pair.second > n){
                return pair.first;
            }
        }
        return 0;
    }
};