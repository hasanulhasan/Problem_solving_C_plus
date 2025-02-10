#include <bits/stdc++.h>
using namespace std;

void isLucky(string s)
{
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < 3; i++)
    {
        leftSum = leftSum + s[i] - '0';
    }
    for (int i = 3; i < 6; i++)
    {
        rightSum = rightSum + s[i] - '0';
    }
    if (leftSum == rightSum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        isLucky(s);
    }
    return 0;
}