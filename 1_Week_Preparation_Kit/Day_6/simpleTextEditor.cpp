#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    string s = "";
    vector<string> v;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            string w;
            cin >> w;
            v.push_back(s);
            s += w;
        }
        else if (t == 2)
        {
            int k;
            cin >> k;
            v.push_back(s);
            s.erase(s.end() - k, s.end());
        }
        else if (t == 3)
        {
            int k;
            cin >> k;
            cout << s[k - 1] << endl;
        }
        else
        {
            s = v.back();
            v.pop_back();
        }
    }
}
