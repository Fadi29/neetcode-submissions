class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> LookupTable;
LookupTable.reserve(nums.size());

for (int i = 0; i < nums.size(); ++i)
{
    int num = target - nums[i];
    if (LookupTable.find(num) != LookupTable.end())
        return {LookupTable[num], i};
    
    LookupTable[nums[i]] = i;
}

return { -1, -1 };
    }
};
