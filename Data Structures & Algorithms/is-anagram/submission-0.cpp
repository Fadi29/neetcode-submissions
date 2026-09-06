class Solution {
public:


    bool isAnagram(string s, string t) {
       short arrBalancer[26] = { 0 }; // ididnt use length validation cuz it could have some spaces or punctuation

for (char c : s)
{
    c = c | 32;
    if (c >= 'a' && c <= 'z')
    {
        ++arrBalancer[c - 'a'];
    }
}

for (char c : t)
{
    c = c | 32;
    if (c >= 'a' && c <= 'z')
    {
        --arrBalancer[c - 'a'];
    }
}

for (int i = 0; i < 26; ++i)
{
    if (arrBalancer[i]) // any number will be true
        return false;
}
return true;
    }
};
