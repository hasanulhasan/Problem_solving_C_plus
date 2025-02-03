#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section[2];
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n][3];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j].id >> arr[i][j].name >> arr[i][j].section >> arr[i][j].marks;
        }
        Student maxMarkStudent = arr[i][0];

        for (int k = 0; k < 3; k++)
        {
            if (arr[i][k].marks > maxMarkStudent.marks)
            {
                maxMarkStudent = arr[i][k];
            }
        }
        cout << maxMarkStudent.id << " " << maxMarkStudent.name << " " << maxMarkStudent.section << " " << maxMarkStudent.marks << endl;
    }

    return 0;
}
