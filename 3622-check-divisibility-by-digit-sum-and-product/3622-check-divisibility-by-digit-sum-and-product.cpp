class Solution {
public:
    bool checkDivisibility(int n) {
        int a=n;
        int sum=0;
        int pro=1;
        while(a!=0){
            int rem=a%10;
            sum+=rem;
            pro*=rem;
            a/=10;
        }
        if(n%(sum+pro)==0){
            return true;
        }
        return false;

        
    }
};