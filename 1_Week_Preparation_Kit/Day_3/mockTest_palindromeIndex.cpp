#include <bits/stdc++.h>

using namespace std;

int palindromeIndex(string s)
{
    int st = 0;
    int ed = s.length() - 1;
    int sol = -1;

    while (st < ed)
    {
        if (s[st] == s[ed])
        {
            st++;
            ed--;
        }
        else
        {
            if (sol == -1)
            {
                if (s[st] == s[ed - 1] && s[st + 1] == s[ed - 2])
                {
                    sol = ed;
                    ed--;
                }
                else if (s[ed] == s[st + 1] && s[ed - 1] == s[st + 2])
                {
                    sol = st;
                    st++;
                }
            }
            else
            {
                return -1;
            }
        }
    }
    return sol;
}

int main()
{

    return 0;
}