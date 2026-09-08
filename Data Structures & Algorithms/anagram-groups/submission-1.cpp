class Solution {
   public:
  string CalculateTheRepetitionOfChars(string& Str)
{
    string SortedCharsWithCounter(26, '0');
    //SortedCharsWithCounter.assign(26, '0');
    for (char c : Str)
    {
        c = c | 32;
        ++SortedCharsWithCounter[c - 'a'];
    }
    return SortedCharsWithCounter;
}

    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, int> Table;
Table.reserve(strs.size());
vector<vector<string>> vGroupAnagrams;
int ExteriorIndexForInsertionInVec = 0;
for (string& s : strs)
{
    string FingerPrint = CalculateTheRepetitionOfChars(s);
    auto Iterator = Table.find(FingerPrint); // pointer
    if (Iterator == Table.end())
    {
        Table[FingerPrint] = ExteriorIndexForInsertionInVec;
        vGroupAnagrams.push_back(vector<string>{s});
        ++ExteriorIndexForInsertionInVec;
    }
    else
    {
        vGroupAnagrams[Iterator->second].push_back(s);
    }
}

return vGroupAnagrams;
    }
};
