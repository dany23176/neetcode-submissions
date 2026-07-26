class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool>cheaker;
        for(int i=0;i<nums.size();i++){
            if(cheaker[nums[i]])
            return true;
            cheaker[nums[i]]=true;
        }
        return false;
    }
};