#include <bits/stdc++.h>

using namespace std;

int superDigit(string n, int k)
{
    long s = 0;
    for (char c : n)
    {
        s += c - '0';
    }

    s *= k;

    while (s >= 10)
    {
        int num = 0;
        while (s > 0)
        {
            num += s % 10;
            s /= 10;
        }
        s = num;
    }
    return s;
}

int main()
{

    return 0;
}