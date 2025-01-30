#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *arr = new int[n];
    int *sortedArr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());

    for (int i = 0; i < n; i++)
    {
        sortedArr[i] = arr[i];
    }
    return sortedArr;
}
int main()
{
    int n;
    cin >> n;
    int *newArr = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }
    return 0;
}