#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    vector<int> result;
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] < 38)
        {
            result.push_back(grades[i]);
        }
        else
        {
            int nextMultiple = grades[i] + (5 - grades[i] % 5);
            if (nextMultiple - grades[i] < 3)
            {
                result.push_back(nextMultiple);
            }
            else
            {
                result.push_back(grades[i]);
            }
        }
    }
    return result;
}

int main(){

    return 0;
}