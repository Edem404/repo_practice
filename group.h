
class Group
{
public:
    Group()
    {
    }

    float sort(float arr[],int count)
    {
        int i_sort;
        for (i_sort = 0; i_sort < count; i_sort++)
        {
            int first = i_sort;

            for (int h = i_sort + 1; h < count; h++)
            {
                if (arr[h] > arr[first])
                    first = h;
            }

            swap(arr[i_sort], arr[first]);
        }
    }
    
};