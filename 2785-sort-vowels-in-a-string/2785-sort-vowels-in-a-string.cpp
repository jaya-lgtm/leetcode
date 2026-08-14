class Solution {
public:
bool isVowel(char ch){
    ch=tolower(ch);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
   
    string sortVowels(string s) {
        int n=s.size();
        vector<char>vowel;
        for(char ch:s){
            if(isVowel(ch)) vowel.push_back(ch);
        }
        int i=0;
        sort(vowel.begin(),vowel.end());
        for(int j=0;j<s.size();j++){
            if(isVowel(s[j])){
                 s[j]=vowel[i];i++;
            }
        }
        return s;
    }
};