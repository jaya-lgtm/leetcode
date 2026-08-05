class Solution {
public:
    bool isVowel(char ch){
        ch=tolower(ch);
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    string sortVowels(string s) {
        int n=s.size();
        vector<char> vowels;
        for(char ch:s){
            if(isVowel(ch)) vowels.push_back(ch);
        }
        int j=0;
        sort(vowels.begin(),vowels.end());
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                s[i]=vowels[j];
                j++;
            }
        }
        return s;
    }
};