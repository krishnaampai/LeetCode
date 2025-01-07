class Solution {
public:
    double power_calc(double x, long n){
        if (n==0){return 1.0;}
        if (n==1){return x;}
        if (n<0){
            return power_calc(1/x , -n);
        }
       
        double result = power_calc(x*x , n/2);
        if (n%2){result*=x;}
        return result;
        
    }
    double myPow(double x, int n) {
      return  power_calc(x,n);
    }

};
