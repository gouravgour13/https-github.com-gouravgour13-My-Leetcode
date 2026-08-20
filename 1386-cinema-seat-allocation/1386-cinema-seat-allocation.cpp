class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        sort(rs.begin(), rs.end());
        long long ans = 2LL*n;
        int i=0;
        while(i<rs.size()){
            int row=rs[i][0];
            
            bool left=true;
            bool mid = true;
            bool right = true;

            while(i<rs.size() && rs[i][0]==row){
                int seat = rs[i][1];
                if(seat>=2 && seat<=5){
                    left = false;
                }
                if(seat>=4 && seat<=7){
                    mid = false;
                }
                if(seat>=6 && seat<=9){
                    right = false;
                }
                
                i++;
            }
            ans-=2;

            if(left && right){
                ans+=2;
            }
            else if(left || mid || right){
                ans+=1;
            }
        }
        return ans;
    }
};