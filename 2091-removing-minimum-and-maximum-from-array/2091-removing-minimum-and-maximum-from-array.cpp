class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mi_ele=nums[0], ma_ele=nums[0];
        int mi_idx=0, ma_idx=0;
        for(int i=0; i<n; i++){
            if(mi_ele>nums[i]){
                mi_ele=nums[i];
                mi_idx=i;
            }
            if(ma_ele<nums[i]){
                ma_ele=nums[i];
                ma_idx=i;
            }
        }
        int mi=min(ma_idx, mi_idx), ma=max(ma_idx, mi_idx);
        int l=ma+1;
        int r=n-mi;
        int m=(mi+1)+(n-ma);
        return min(l,min(r,m));
    }
};