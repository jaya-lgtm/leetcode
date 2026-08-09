class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        int len=s.size();
        string res="";
        for(int i=0;i<len;i+=2*(numRows-1)) res+=s[i];
        for(int i=1;i<numRows-1;i++){
            int f=0,j=i;
            while(j<len){
                res+=s[j];
                if(f==0) j+=2*(numRows-i-1);
                else j+=2*i;
                f=1-f;
            }
        }
         for(int i=numRows-1;i<len;i+=2*(numRows-1)) res+=s[i];
         return res;
    }
};