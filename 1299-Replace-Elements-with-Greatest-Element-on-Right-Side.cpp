class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int greatest;
        if (arr.size()==1){
            arr[0] = -1;
            return arr;
        }
        for (int i =0;i<arr.size();i++){
            if (i==arr.size()-1){
                arr[arr.size()-1] = -1;
                 return arr;
            }
            greatest = arr[i+1];
            for (int j=i+1;j<arr.size();j++){
                if (arr[j]>greatest){
                    greatest = arr[j];
                }
                
            }
            arr[i] = greatest;
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};
