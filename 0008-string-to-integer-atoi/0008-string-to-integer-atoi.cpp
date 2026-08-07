class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        long long res=0;
        int i=0;
        int sign=1;
        
        while(i<n && s[i]==' ') i++;
        if( i<n && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-') sign=-1;
            i++;
        }
        while(i<n && (s[i]>='0' && s[i]<='9')){
            int digit=s[i]-'0';
            if(res>INT_MAX/10LL || (res==INT_MAX/10LL && digit>(sign==1?7:8))){
               return sign==1?INT_MAX:INT_MIN;
            }
            res=res*10+digit;
            i++;
        }
        res= res*sign;
        return (int)res;
    }
};