#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
public:
    string name;
    vector<int> marks;
    float average;

    Student()
    {
        average = 0;
    }

    int marks_arr_create(int length)
    {
        for (int i = 0; i < length; i++)
        {
            int m;
            cout << "student mark:";
            cin >> m;
            marks.push_back(m);
        }
        cout << endl;
    }

    int marks_output()
    {
        for (int i = 0; i < marks.size(); i++)
        {
            cout << marks[i] << ", ";
        }
        cout << "\t\t";
    }

    float average_create()
    {
        for (int i = 0; i < marks.size(); i++)
        {
            average = average + marks[i];
        }
        average = average / marks.size();
        return average;
    }
};