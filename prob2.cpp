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
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 3, j;
    int size = *(&a + 1) - a;
    cout << size << "\n";

    for (j = 0; j < (size / k); j++)
        reverse_array(a + (j * k), k);

    int r = size % k;
    reverse_array(a + size - r, r);
    for (j = 0; j < size; j++)
        cout << a[j] << " ";
    return 0;
}