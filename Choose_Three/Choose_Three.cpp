#include <bits/stdc++.h>
using namespace std;

int checkArr(int n, int sum){
    
    int arr[n];
    
    for (int a = 0; a < n; a++) {
        cin >> arr[a];
    }
    
     for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == sum) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "NO" << endl;;
    return 0;
}

int main()
{  
   int t;
   cin >> t ;
   int iterArr[t];
   
   for (int i = 0; i < t; i++) {
        int n, sum;
        cin >> n >> sum;
        checkArr(n,sum);
   }
    
   return 0;
}