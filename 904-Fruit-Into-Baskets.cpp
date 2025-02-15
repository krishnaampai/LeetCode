class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> umap;
        int left = 0;
        int right, maxSize=0;
        for (right =0; right<fruits.size();right++){
            umap[fruits[right]]++;
            if (umap.size() >2){
                umap[fruits[left]]--;
                if (umap[fruits[left]]== 0){
                    umap.erase(fruits[left]);
                }
                left++;
            }
            maxSize = max(maxSize, right-left+1);
        }
        return maxSize;
    }
};
