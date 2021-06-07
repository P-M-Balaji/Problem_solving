#include <iostream>
using namespace std;

int main()
{
    char a[] = {'3', '7', '4', '2', '9', '1', '-', '-', '*', '+', '-'};
    int i, j, result;
    for (i = 0; a[i] != ('*' || '/' || '-' || '+' || '%'); i++)
    {
        if (a[i] == '*' || a[i] == '/' || a[i] == '-' || a[i] == '+' || a[i] == '%')
            break;
    }
    int m = i;
    result = a[0] - '0';

    for (j = 1; j < m; j++, i++)
    {
        if (a[i] == '+')
        {
            result += (a[j] - '0');
            cout << (a[j] - '0') << "\t" << result << "\n";
            continue;
        }
        else if (a[i] == '*')
        {
            result *= (a[j] - '0');
            cout << (a[j] - '0') << "\t" << result << "\n";
            continue;
        }
        else if (a[i] == '-')
        {
            result -= (a[j] - '0');
            cout << (a[j] - '0') << "\t" << result << "\n";
            continue;
        }
        else if (a[i] == '/')
        {
            result /= (a[j] - '0');
            cout << (a[j] - '0') << "\t" << result << "\n";
            continue;
        }
        else if (a[i] == '%')
        {
            result %= (a[j] - '0');
            cout << (a[j] - '0') << "\t" << result << "\n";
            continue;
        }
    }
    cout << '\n'
         << result;
    return 0;
}