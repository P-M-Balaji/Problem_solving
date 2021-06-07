#include <iostream>

using namespace std;

void reorder(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            a[count++] = a[i];
    }
    for (int i = count; i < n; i++)
        a[i] = 0;
}

int main()
{
    int a[] = {1, 0, 2, 3, 0, 4, 0, 5};
    int size = *(&a + 1) - a;
    reorder(a, size);
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    return 0;
}