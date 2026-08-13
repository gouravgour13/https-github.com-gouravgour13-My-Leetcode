class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0]+1;
        }
        int s=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]!=nums[i-1]+1){
                break;
            }
            s+=nums[i];
        }
        sort(nums.begin(), nums.end());
        int a=s;

        for(int i=0; i<n; i++){
            if(nums[i]<s){
                continue;
            }
            if(nums[i]!=s){
                return s;
            }
            s++;
           
        }
        return s;
    }
};