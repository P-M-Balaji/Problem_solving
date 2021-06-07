//C++ program to sort an array alternatively
// High1 Low1 High2 Low2....
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (i % 2 == 1)
            {
                if (a[i] > a[j])
                {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
            else
            {
                if (a[i] < a[j])
                {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
            }
        }
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}