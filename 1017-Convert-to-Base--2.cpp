class Solution {
public:
   string baseNeg2(int n) {
      string result = "";
        if (n==0){
            result+= ('0');
            
        }
        int r;
        while(n){
             r = n%(-2);
            if (r<0){
                r+=2;
                n=n/(-2)+1;
            }
            else {
                n=n/(-2);
            }
            result +=( r+ '0');
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};
