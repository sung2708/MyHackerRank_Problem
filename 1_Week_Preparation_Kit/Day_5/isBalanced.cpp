#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s)
{
    stack<char> st;
    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
            {
                return "NO";
            }
            if (c == ')' && st.top() != '(')
            {
                return "NO";
            }
            if (c == ']' && st.top() != '[')
            {
                return "NO";
            }
            if (c == '}' && st.top() != '{')
            {
                return "NO";
            }
            st.pop();
        }
    }
    return st.empty() ? "YES" : "NO";
}

int main()
{

    return 0;
}