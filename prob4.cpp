//C++ program to merge 2 arrays sorted in ascending & descending order.
#include <iostream>
using namespace std;

void reverse_array(int *b, int n)
{
    int temp;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = *(b + i);
        *(b + i) = *(b + j);
        *(b + j) = temp;
    }
}

int main()
{

    int n1, n2, i, j, k;
    cin >> n1 >> n2;
    int a[n1], b[n2], c[n1 + n2];

    for (i = 0; i < n1; i++)
        cin >> a[i];

    for (i = 0; i < n2; i++)
        cin >> b[i];

    if (a[0] > a[n1 - 1])
        reverse_array(a, n1);

    if (b[0] > b[n2 - 1])
        reverse_array(b, n2);

    i = 0;
    j = 0;
    k = 0;
    while (j < n1 && k < n2)
    {
        if (a[j] < b[k])
        {
            c[i++] = a[j];
            j++;
        }

        else if (a[j] > b[k])
        {
            c[i++] = b[k];
            k++;
        }
        else
        {
            c[i++] = a[j];
            j++;
            k++;
        }
    }
    cout << "\n";

    while (j < n1 && c[i - 1] != a[j])
        c[i++] = a[j++];

    while (k < n2 && c[i - 1] != b[k])
        c[i++] = b[k++];

    for (j = 0; j < i; j++)
        cout << c[j] << " ";

    return 0;
}