class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<char,int>hash1,hash2;
        vector<char>alpha;
        vector<vector<string>>ans;
        int j,i=0;
        int cheak1=0,cheak2;
        while(i<strs.size()){
            for(int k=0;k<strs[i].size();k++){
                if(hash1[strs[i][k]]==0)
                alpha.push_back(strs[i][k]);
                hash1[strs[i][k]]++;
            }
            ans.push_back({strs[i]});
            j=i+1;

            while(j<strs.size()){
                 cheak1=0;
                for(int k=0;k<strs[j].size();k++){
                    if(hash1[strs[j][k]]==0){
                        cheak1= 1;
                        break;
                    }
                    hash2[strs[j][k]]++;
                }
                if(cheak1 ==  0){
                    cheak2 = 0;
                    for(int k=0;k<alpha.size();k++){
                        if(hash1[alpha[k]]!= hash2[alpha[k]]){
                            cheak2 = 1;
                            break;
                        }                
                    }
                    if(cheak2 == 0){
                        ans[ans.size()-1].push_back(strs[j]);
                        strs.erase(strs.begin()+j);
                        hash2.clear(); 
                    }
                    else{
                        hash2.clear();
                        j++; 
                    }
                }
                else{
                    hash2.clear();
                    j++; 
                }
            }
            hash1.clear();
            i++;
            alpha.clear();
        }
        return ans;

        
    }
};
