class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
                continue;
            }
            if(!st.empty() && ((s[i]==')' && st.top() == '(') || (s[i]==']' && st.top() == '[') || (s[i]=='}' && st.top() == '{')) ){
                st.pop();
                continue;
            }
            return false;
        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};