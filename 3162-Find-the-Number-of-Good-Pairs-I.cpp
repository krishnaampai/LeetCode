class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count =0;
        for (int n : nums1){
            for (int m : nums2){
                if (n%(m*k) ==0){
                    count++;
                }
            }
        }
        return count;
    }
};