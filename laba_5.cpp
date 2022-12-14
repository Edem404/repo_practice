#include "student.h"
#include "group.h"

int main()
{

    int num_of_students;
    cout << "how many students in group?\t";
    cin >> num_of_students;
    vector<Student> list_of_students;
    for (int index = 0; index < num_of_students; index++)
    {
        list_of_students.push_back(Student());
    }

    for (int i = 0; i < num_of_students; i++)
    {
        int num_of_marks;
        cout << "name of student: ";
        cin >> list_of_students[i].name;
        cout << "how many marks " << list_of_students[i].name << " have?\t" << endl;
        cin >> num_of_marks;
        list_of_students[i].marks_arr_create(num_of_marks);
        list_of_students[i].avarage_of_marks_create();
    }
    cout << "____________________________________________________" << endl;
    cout << "student name:\t"
         << "student marks:\t"
         << "mark average:\t" << endl;
    cout << "____________________________________________________" << endl;

    for (int i = 0; i < num_of_students; i++)
    {
        cout << list_of_students[i].name << " \t";
        list_of_students[i].marks_output();
        cout << list_of_students[i].avarage_of_marks << endl;
    }

    Group ir_12;

    float arr_average_of_marks [num_of_students];
    for (int i = 0; i < num_of_students; i++)
    {

        arr_average_of_marks[i] = list_of_students[i].avarage_of_marks;
    }

    ir_12.make_top_of_students(arr_average_of_marks, num_of_students);

    cout << "____________________________________________________" << endl;
    cout << "do you wanna see the top of students?";
    cout << " | 1-yes\t2-no | ";
    int choise;
    cin >> choise;
    cout << "____________________________________________________" << endl;

    if (choise == 1)
    {
        for (int index_top = 0; index_top < num_of_students; index_top++)
        {
            for (int index_top_for = 0; index_top_for < num_of_students; index_top_for++)
            {
                if (arr_average_of_marks[index_top] == list_of_students[index_top_for].avarage_of_marks)
                {
                    cout << list_of_students[index_top_for].name << "\t";
                    list_of_students[index_top_for].marks_output();
                    cout << list_of_students[index_top_for].avarage_of_marks << endl;
                }
            }
        }
    }
    else
    {
        cout << "okay,goodbye teacher";
        cout << "____________________________________________________";
    }

    cout << endl;
    system("pause");
    return 0;
}