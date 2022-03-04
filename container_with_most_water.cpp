// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &a)
    {
        int n = a.size();

        int l = 0;
        int r = n - 1;

        int maxi = 0;
        while (l < r)
        {
            int area = min(a[l], a[r]) * (r - l);
            maxi = max(area, maxi);
            if (a[l] <= a[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        return maxi;
    }
};