#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trailingZeroes(int N)
    {
        int ans = 0;
        int p = 5;
        while ((N / p) > 0)
        {
            ans += (N / p);
            p = p * 5;
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.trailingZeroes(N);
        cout << ans << endl;
    }
    return 0;
}