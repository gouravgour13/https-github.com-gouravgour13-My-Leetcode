class Solution {
public:
    int smallestNumber(int n, int t) {
        int a=n;
        int pro=1;
        for(int i=a;i<=a+10;i++){
            n=i;
            pro=1;
            while(n!=0){
                int rem=n%10;
                pro*=rem;
                n/=10;
            }
            if(pro%t==0){
                return i;
            }
        }
        
        return n;
    }
};