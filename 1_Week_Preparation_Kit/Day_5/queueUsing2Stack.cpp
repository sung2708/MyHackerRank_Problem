#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    vector<int> stack1, stack2;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            stack1.push_back(x);
        }
        else
        {
            if (stack2.empty())
            {
                while (!stack1.empty())
                {
                    stack2.push_back(stack1.back());
                    stack1.pop_back();
                }
            }
            if (!stack2.empty())
            {
                if (type == 2)
                {
                    stack2.pop_back();
                }
                else if (type == 3)
                {
                    cout << stack2.back() << endl;
                }
            }
        }
    }
    return 0;
}
