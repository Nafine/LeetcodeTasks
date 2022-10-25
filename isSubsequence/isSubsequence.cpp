bool isSubsequence(string s, string t)
{
    unsigned int idx = 0;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (t[i] == s[idx]) idx++;
    }

    return idx == s.size() ? true : false;
}