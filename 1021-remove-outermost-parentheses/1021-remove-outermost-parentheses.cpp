class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int i=0, k=i+1;
        string ans;
        int score=-1;
        while(i<n || k<n){
            if(s[k]=='('){
                score--;
            }
            else{
                score++;
            }
            if(score==0){
                i=k+1;
                k=k+2;
                score=-1;
                continue;
            }
            ans.push_back(s[k]);
            k++;
        }
        return ans;
    }
};