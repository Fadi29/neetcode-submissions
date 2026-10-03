class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedstr = "";
for (const string& s : strs)
{
    encodedstr += to_string(s.length()) + '#';
    encodedstr += s;
}
return encodedstr;
    }

    vector<string> decode(string s) {
string Temp = "";
vector <string> v = {};
int Num = 0;
for (int i = 0; i < s.length(); ++i)
{
    if (isdigit(s[i]))
    {
        Num = int(s[i]) - 48 + Num * 10;
    }
    else
    {
        string Temp(s.begin() + i + 1, s.begin() + i + Num + 1);
        //copy(s.begin() + i + 1, s.begin() + Num, Temp);
        v.push_back(Temp);
        i += Num;
        Num = 0;
    }
}
return v;
    }
};
