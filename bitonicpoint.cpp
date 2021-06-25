#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaximum(int arr[], int n)
    {
        int beg = 0;
        int end = n - 1;

        while (beg <= end)
        {
            int mid = beg + (end - beg) / 2;
            if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return arr[mid];
            else if (arr[mid] < arr[mid - 1])
                end = mid - 1;
            else
                beg = mid + 1;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.findMaximum(arr, n);
    cout << ans << "\n";
    return 0;
}