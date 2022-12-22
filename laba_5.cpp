#include "student.h"
#include "group.h"

int main()
{

    int list_count;
    cout << "how many students in group?\t";
    cin >> list_count;
    vector<Student> list;
    for (int index = 0; index < list_count; index++)
    {
        list.push_back(Student());
    }

    for (int i = 0; i < list_count; i++)
    {
        int length;
        cout << "name of student: ";
        cin >> list[i].name;
        cout << "how many marks " << list[i].name << " have?\t" << endl;
        cin >> length;
        list[i].marks_arr_create(length);
        list[i].average_create();
    }
    cout << "____________________________________________________" << endl;
    cout << "student name:\t"
         << "student marks:\t"
         << "mark average:\t" << endl;
    cout << "____________________________________________________" << endl;

    for (int i = 0; i < list_count; i++)
    {
        cout << list[i].name << " \t";
        list[i].marks_output();
        cout << list[i].average << endl;
    }

    Group ir_12;

    float arr_average [list_count];
    for (int i = 0; i < list_count; i++)
    {

        arr_average[i] = list[i].average;
    }

    ir_12.sort(arr_average, list_count);

    cout << "____________________________________________________" << endl;
    cout << "do you wanna see the top of students?";
    cout << " | 1-yes\t2-no | ";
    int choise;
    cin >> choise;
    cout << "____________________________________________________" << endl;

    if (choise == 1)
    {
        for (int index_top = 0; index_top < list_count; index_top++)
        {
            for (int index_top_for = 0; index_top_for < list_count; index_top_for++)
            {
                if (arr_average[index_top] == list[index_top_for].average)
                {
                    cout << list[index_top_for].name << "\t";
                    list[index_top_for].marks_output();
                    cout << list[index_top_for].average << endl;
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