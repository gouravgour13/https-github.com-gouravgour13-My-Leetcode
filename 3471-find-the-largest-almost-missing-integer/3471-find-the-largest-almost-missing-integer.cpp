class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(auto it: nums){
            freq[it]++;
        }
        if(n==k){
            return *max_element(nums.begin(), nums.end());
        }

        int flag=0;
        for(auto it: freq){
            if(it.second==1){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return -1;
        }

        if(k==n || k==1){
            sort(nums.begin(), nums.end());
            for(int i=n-1;i>=0;i--){
                if(freq[nums[i]]==1){
                    return nums[i];
                }
            }
        }
        if(k<n && k!=1){
            if(freq[nums[0]]==1 && freq[nums[n-1]]==1){
                return max(nums[0], nums[n-1]);
            }
            if(freq[nums[0]]==1){
                return nums[0];
            }
            if(freq[nums[n-1]]==1){
                return nums[n-1];
            }
            return -1;
            
        }
        return -1;
    }
};