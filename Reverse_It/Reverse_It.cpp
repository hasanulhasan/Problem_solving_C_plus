#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int id;
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t ;
    Student a[t];
    
    for (int i = 0; i < t; i++) {
        cin >>  a[i].name >> a[i].id >> a[i].section >> a[i].marks;
    }
    
    for (int i = 0; i < t; i++) {
        cin >>  a[i].name >> a[i].id >> a[i].section >> a[i].marks;
    }
    
     for (int i = 0; i < t / 2; i++) {
        char tempVal = a[i].section;
        a[i].section = a[t - i - 1].section;
        a[t - i - 1].section = tempVal;
    }
    
    for (int i = 0; i < t; i++) {
        cout <<  a[i].name <<  " " << a[i].id <<  " " << a[i].section <<  " " << a[i].marks << endl;
    }

    return 0;
}