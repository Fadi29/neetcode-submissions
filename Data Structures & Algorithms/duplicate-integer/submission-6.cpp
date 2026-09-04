class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {

       unordered_set<int> CheckTable;

CheckTable.reserve(nums.size());

for (size_t i = 0; i < nums.size(); ++i)
{
    if (CheckTable.find(nums[i]) != CheckTable.end())
        return true;

    CheckTable.insert(nums[i]);
}
return false;
    }
};