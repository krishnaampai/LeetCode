class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>result;
        unordered_map<int,int>umap;
      
        for (int n : nums){
            umap[n]++;
        }
        for (auto& [key, count] : umap) {
            if (count > nums.size() / 3) {
                result.push_back(key);
            }
        }
        return result;
    }
};