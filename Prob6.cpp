//C++ program to find the sum of values of respective characters in a string.
//Input Format:abc
//Output Format:6
#include <iostream>
using namespace std;

int main()
{
    string s;
    int sum = 0;
    cin >> s;
    int size = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        size++;
    }
    for (int i = 0; i < size; i++)
    {
        sum += s[i] - 'a' + 1;
    }
    cout << sum;
    return 0;
}