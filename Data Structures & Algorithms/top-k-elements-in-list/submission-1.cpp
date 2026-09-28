class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> Table;
Table.reserve(nums.size());

for (int i : nums)
{
    Table[i]++;
}

vector<vector<int>> SortedNums(nums.size() + 1);

for (const auto& pair : Table)
{
    SortedNums[pair.second].push_back(pair.first);
}

vector<int> KFrequent;
for (int i = SortedNums.size() - 1; i >= 0; --i)
{
    if (!SortedNums[i].empty())
    {
        KFrequent.insert(KFrequent.end(), SortedNums[i].begin(), SortedNums[i].end());

        if (KFrequent.size() >= k)
            break;
    }
}
return KFrequent;
    }
};
