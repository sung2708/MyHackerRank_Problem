#include <bits/stdc++.h>

using namespace  std;

string timeConversion(string s)
{
    string result = "";
    string ampm = s.substr(8, 2);
    string hour = s.substr(0, 2);
    string minSec = s.substr(2, 6);

    if (ampm == "AM")
    {
        if (hour == "12")
        {
            result = "00" + minSec;
        }
        else
        {
            result = hour + minSec;
        }
    }
    else
    {
        if (hour == "12")
        {
            result = hour + minSec;
        }
        else
        {
            int h = stoi(hour);
            h += 12;
            result = to_string(h) + minSec;
        }
    }

    return result;
}

int main(){

    return 0;
}
