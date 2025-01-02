#include  <bits/stdc++.h>

using namespace std;

vector<string> mostActive(vector<string> customers)
{
    vector<string> res;
    map<string, int> m;
    for (auto c : customers)
    {
        m[c]++;
    }
    // at least 5% of the total number of transactions
    int n = customers.size();
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second >= 0.05 * n)
        {
            res.push_back(it->first);
        }
    }
    return res;
}


int main(){
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    int n;
    cin >> n;
    vector<string> customers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> customers[i];
    }
    vector<string> res = mostActive(customers);
    for (auto r : res)
    {
        cout << r << endl;
    }
    return 0;
}