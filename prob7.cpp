// C++ program to find difference between two given times.
#include <bits/stdc++.h>
using namespace std;

// Remove ':' and convert it into an integer
int removeColon(string s)
{
    if (s.size() == 4)
        s.replace(1, 1, "");

    if (s.size() == 5)
        s.replace(2, 1, "");

    return stoi(s);
}

// Main function which finds difference
string diff(string s1, string s2)
{

    // change string (eg. 2:21 --> 221, 00:23 --> 23)
    int time1 = removeColon(s1);
    int time2 = removeColon(s2);

    // difference between hours
    int hourDiff = time2 / 100 - time1 / 100 - 1;

    // difference between minutes
    int minDiff = time2 % 100 + (60 - time1 % 100);

    if (minDiff >= 60)
    {
        hourDiff++;
        minDiff = minDiff - 60;
    }

    // convert answer again in string with ':'
    string res = to_string(hourDiff) + ':' + to_string(minDiff);
    return res;
}

int main()
{
    int size = 3;
    char time_[][9] = {'12:34:55','01:12:13','08:12:15'};
    string td;
    string min = "23:59:59";
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; i < size; j++)
        {
            td = diff(time_[i - 1], time_[j]);
            if (((min[0] - '0') * 10 + min[1] - '0') == ((td[0] - '0') * 10 + td[1] - '0'))
                min = td;

            else if (((min[0] - '0') * 10 + min[1] - '0') == ((td[0] - '0') * 10 + td[1] - '0'))
            {
                if (((min[3] - '0') * 10 + min[4] - '0') < ((td[3] - '0') * 10 + td[4] - '0'))
                    min = td;
            }

            else if (((min[0] - '0') * 10 + min[1] - '0') == ((td[0] - '0') * 10 + td[1] - '0'))
            {
                if (((min[3] - '0') * 10 + min[4] - '0') == ((td[3] - '0') * 10 + td[4] - '0')){
                    if (((min[6] - '0') * 10 + min[7] - '0') < ((td[6] - '0') * 10 + td[7] - '0'))
                        min = td;
                }
            }
        }
    }

    cout << min << endl;
    return 0;
}
