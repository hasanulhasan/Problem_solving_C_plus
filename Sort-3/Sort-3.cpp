#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char section;
    int id;
    int mathMarks;
    int engMarks;
    int totalMarks;
};

bool sortingFunc(Student l, Student r){
    
    if(l.totalMarks == r.totalMarks){
        return l.id < r.id;
    }else{
        return l.totalMarks > r.totalMarks;
    }
};

int main()
{
    int t;
    cin >> t ;
    Student a[t];
    
    for (int i = 0; i < t; i++) {
        cin >>  a[i].name >> a[i].cls >> a[i].section >>  a[i].id >>  a[i].mathMarks >>  a[i].engMarks;
        a[i].totalMarks = a[i].mathMarks + a[i].engMarks;
    }
    
    sort(a, a+t, sortingFunc);
    
    for (int i = 0; i < t; i++) {
        cout <<  a[i].name <<  " " << a[i].cls <<  " " << a[i].section <<  " " << a[i].id <<  " " << a[i].mathMarks << " " << a[i].engMarks << endl;
    }

    return 0;
}
