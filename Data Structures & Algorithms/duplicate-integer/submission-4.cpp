class Solution {
public:

    bool hasDuplicate(vector<int>& nums) {

       unordered_map<int, bool> CheckTable;

       CheckTable.reserve(nums.size());

       for (size_t i = 0; i < nums.size(); ++i)
         {
           if (CheckTable.find(nums[i]) != CheckTable.end())
               return true;

            CheckTable[nums[i]] = true;
         }
        return false;
    }
};