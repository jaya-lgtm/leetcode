class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size()-1;
        int m=num2.size()-1;
        string ans="";
        int c=0;
        while(n>=0||m>=0||c){
            int sum=c;
            if(n>=0) sum+=num1[n]-'0',n--;
            if(m>=0) sum+=num2[m]-'0',m--;
            if(sum>=10){
                ans+=(sum%10)+'0';
                c=sum/10;
            }
            else{
                ans+=sum+'0';
                c=0;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};