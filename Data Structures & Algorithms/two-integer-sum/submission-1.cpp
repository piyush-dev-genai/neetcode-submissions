class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>um;
        um[nums[0]] = 0;
        vector<int>ans;
        int n = nums.size();
        for(int i = 1; i<n; i++){
            if(um.count(target-nums[i])){
                ans.push_back(um[target-nums[i]]);
                 ans.push_back(i);
                 return ans;
            }else{
                um[nums[i]] = i;
            }
        }
        return ans;
    }
};
