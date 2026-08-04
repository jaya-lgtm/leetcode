class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        vector<int> ans(n1+n2,0);
        for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                int p=(num1[i]-'0')*(num2[j]-'0')+ans[i+j+1];
                ans[i+j+1]=p%10;
                ans[i+j]+=p/10;
            }
        }
        string res="";
        for(int i=0;i<n1+n2;i++){
            if(res=="" && ans[i]==0) continue;
            res+=ans[i]+'0';
        }
        if(res=="") return "0";
        else return res;
    }
};