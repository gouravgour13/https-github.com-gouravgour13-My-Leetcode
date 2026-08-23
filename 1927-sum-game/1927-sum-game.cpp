class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int qr=0, ql=0;
        int suml=0, sumr=0;
        for(int i=0; i<n ;i++){
            if(i<(n/2)){
                if(num[i]=='?'){
                    ql++;
                }
                else{
                    suml+=num[i]-'0';
                }
            }
            else{
                if(num[i]=='?'){
                    qr++;
                }
                else{
                    sumr+=num[i]-'0';
                }
            }
        }
        if((ql+qr)%2==1){
            return true;
        }
        if((2*suml + 9*ql)==(2*sumr + 9*qr)){
            return false;
        }
        return true;

    }
};