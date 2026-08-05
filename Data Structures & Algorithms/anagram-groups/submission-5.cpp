class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans1;
        vector<vector<string>> ans2;

        for(auto& s: strs){

            string key="";
            vector<int>arr(26,0);

            for(auto letter:s){
                arr[int(letter-'a')]++;
            }

            for(auto i:arr){
                //key+=to_string(i);
                key=key+","+to_string(i);
            }

            ans1[key].push_back(s);
        }

        for(auto& Pair:ans1){
            ans2.push_back(Pair.second);
        }
        
        return ans2;
    }
};
