class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> umap;
        for (int n: nums){
            umap.insert(n);
        }
        int result =0;
        
        for (int n : nums){
            if (umap.find(n)!=umap.end() && umap.find(n-1)== umap.end()){
                int current = n;
               int  count =0;

                while(umap.find(current) != umap.end()){
                    umap.erase(current);
                    current++;
                    count++;
                }
                result = max(result,count);
            }
        }
        return result;
    }
};