class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char, int>freq;
        if(n<=2){
            return n;
        }
        freq[s[0]]++;
        int l=0, r=1;
        int ans=1;
        while(l<r && r<n){
            freq[s[r]]++;
            while(freq[s[r]]>2){
                freq[s[l]]--;
                l++;
            }
            ans=max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};