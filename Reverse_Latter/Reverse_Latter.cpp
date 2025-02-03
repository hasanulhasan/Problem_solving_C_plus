#include <bits/stdc++.h>
using namespace std;

void makeReverse()
{
    char s[10001];

    while (cin.getline(s, 10001))
    {
        int size = strlen(s);
        sort(s, s + size);

        for (int i = 0; i < size; i++)
        {
            if (s[i] != 32)
            {
                cout << s[i];
            }
        }
        cout << "\n";
    }
}

int main()
{
    makeReverse();
    return 0;
}