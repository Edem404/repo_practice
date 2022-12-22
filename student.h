#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
public:
    string name;
    vector<int> marks;
    float average_of_marks;

    Student()
    {
        average_of_marks = 0;
    }

    int marks_arr_create(int num_of_marks)
    {
        for (int i = 0; i < num_of_marks; i++)
        {
            int m;
            cout << "student mark:";
            cin >> m;
            marks.push_back(m);
        }
        cout << endl;
    }

    void marks_output()
    {
        for (int i = 0; i < marks.size(); i++)
        {
            cout << marks[i] << ", ";
        }
        cout << "\t\t";
    }

    float average_of_marks_create()
    {
        for (int i = 0; i < marks.size(); i++)
        {
            average_of_marks = average_of_marks + marks[i];
        }
        average_of_marks = average_of_marks / marks.size();
        return average_of_marks;
    }
};