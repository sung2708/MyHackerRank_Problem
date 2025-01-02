#include <bits/stdc++.h>

using namespace std;

vector<int> stringAnagram(vector<string> dictionary, vector<string> query)
{
    vector<int> res;
    map<string, int> m;
    for (auto d : dictionary)
    {
        string s = d;
        sort(s.begin(), s.end());
        m[s]++;
    }
    for (auto q : query)
    {
        string s = q;
        sort(s.begin(), s.end());
        res.push_back(m[s]);
    }
    return res;
}

int main(){

    return 0;
}