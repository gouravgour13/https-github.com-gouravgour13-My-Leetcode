class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n= nums.size();
        int ans=1;
        if(n==1){
            return ans;
        }
        int l=0, r=1;
        unordered_map<int, int> freq;
        freq[nums[l]]++;
        while(r<n && l<r){
            freq[nums[r]]++;
            while(l<r && freq[nums[r]]>k){
                freq[nums[l]]--;
                l++;
            }
            ans=max(ans,(r-l+1));
            r++;
        }
        return ans;
    }
};