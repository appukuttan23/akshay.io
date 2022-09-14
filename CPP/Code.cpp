#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    vector<int> v1 = {1, 2, 3, 6, 7, 7};

    while (v1.size() > 0)
    {

        int larg = v1[(v1.size() - 1)];
        int sec = v1[(v1.size() - 2)];
        if (larg == sec)
        {
            v1.pop_back();
            v1.pop_back();
        }
        else
        {
            if (larg > sec)
            {
                swap(v1[(v1.size() - 1)], v1[(v1.size() - 2)]);
                int last = v1[(v1.size() - 1)];
                v1.pop_back();
                v1[(v1.size() - 1)] = v1[(v1.size() - 1)] - last;
            }
            else
            {
                int last = v1[(v1.size() - 1)];
                v1.pop_back();
                v1[(v1.size() - 1)] = v1[(v1.size() - 1)] - last;
            }
        }
    }
    int c;
    if (v1.size() == 0)
    {
        c=0;
        
    }
    else
    {
        c=v1[0];
        
    }
    return c;
}