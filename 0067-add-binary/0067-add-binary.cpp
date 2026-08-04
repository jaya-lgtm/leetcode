class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1;
        int m=b.size()-1;
        string  ans="";
        int c=0;
        while(n>=0||m>=0||c){
            int sum=c;
            if(n>=0){
                sum+=a[n]-'0';
                n--;
            }
            if(m>=0){
                sum+=b[m]-'0';
                m--;

            }
            if(sum==3){
                c=1;
                ans+='1';
            }
            if(sum==2){
                c=1;
                ans+='0';
            }
            if(sum==1){
                ans+='1';
                c=0;
            }
            if(sum==0){
                ans+='0';
                c=0;
            }
            
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};