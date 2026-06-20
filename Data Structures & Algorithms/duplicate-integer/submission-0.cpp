class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()<=0){
            return false;
        }
        unordered_map<int, int>um;
        um[nums[0]] = 1;
        for(int i = 1; i<nums.size(); i++){
            if(um.find(nums[i]) != um.end()){
                return true;
            }
            um[nums[i]] = 1;
        }
        return false;
    }
};