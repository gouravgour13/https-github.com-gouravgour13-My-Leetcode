class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int flag=0;
       
        for(int i=0; i<n; i++){
            int mi=INT_MAX, ma=INT_MIN;
            for(int k=0; k<=i;k++){
                ma=max(ma, nums[k]);
            }
            for(int k=i; k<n; k++){
                mi=min(mi, nums[k]);
            }
            if(ma-mi<=k){
                return i;
            }
        }
        return -1;
    }
};