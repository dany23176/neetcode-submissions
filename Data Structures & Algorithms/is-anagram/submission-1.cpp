class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char>letters;
        unordered_map<char,int> count1,count2;
        for(int i=0;i<s.size();i++){
            if(count1[s[i]]==0)
            letters.push_back(s[i]);
            count1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(count1[t[i]]==0)
            return false;
            count2[t[i]]++;
        }
        for(int i=0;i<letters.size();i++){
            if(count1[letters[i]]!=count2[letters[i]])
            return false;
        }
        return true;
    }
};
