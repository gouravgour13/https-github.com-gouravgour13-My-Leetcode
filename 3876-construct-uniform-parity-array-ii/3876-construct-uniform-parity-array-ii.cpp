class Solution {
public:
    bool uniformArray(vector<int>& num1) {
        int co=0, ce=0, n=num1.size();
        for(int i=0; i<n; i++){
            if(num1[i]%2==0){
                ce++;
            }
            else{
                co++;
            }
        }
        if(ce==0 || co==0){
            return true;
        }
        sort(num1.begin(), num1.end());
        if(num1[0]%2==0){
            return false;
        }
        return true;
    }
};