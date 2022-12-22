
class Group
{
public:
    Group()
    {
    }

    void make_top_of_students(float arr_average_of_marks[],int num_of_students)
    {
        int i_sort;
        for (i_sort = 0; i_sort < num_of_students; i_sort++)
        {
            int first = i_sort;

            for (int h = i_sort + 1; h < num_of_students; h++)
            {
                if (arr_average_of_marks[h] > arr_average_of_marks[first])
                    first = h;
            }

            swap(arr_average_of_marks[i_sort], arr_average_of_marks[first]);
        }
    }
    
};