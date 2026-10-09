class Solution {
public:
    int minInsertions(string s) {
        int sum=0,count=0,ma=0;
        int n=s.size();
        int curr=0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                sum+=-2;
                ma=max(sum,ma);
            }
            else{
                sum+=2;
                ma=max(sum,ma);
                if(i+1<n && s[i+1]==')'){
                    i++;
                    continue;
                }
                else{
                    count++;
                }
            }
        }
        if(ma>0){
            count+=ma/2;
        }
        count+=ma-sum;
        return count;
    }
};