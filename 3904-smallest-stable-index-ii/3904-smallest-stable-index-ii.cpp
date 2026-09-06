class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<pair<int, int>>v;
        int n=nums.size();
        for(int i=0; i<n; i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(), v.end());
        int ma=nums[0], mi=v[0].first, idx=0;
        for(int i=0; i<n; i++){
            ma=max(ma,nums[i]);
            while(idx<n && v[idx].second<i){
                idx++;
            }
            if(v[idx].second>=i){
                mi=v[idx].first;
            }
            else{
                return -1;
            }
            if(ma-mi<=k){
                return i;
            }
        }
        return -1;
    }
};