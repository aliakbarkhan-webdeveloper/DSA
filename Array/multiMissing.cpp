#include <iostream>
using namespace std;

int arr[8] = {20, 1, 2, 5, 6, 8, 9, 12};
int n = 8;

void miss()
{
    int diff = arr[0] - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << "missing element is " << i + diff << "\n";
                diff++;
            }
        }
    }
}

void sorting()
{
    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] > arr[i + 1])
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
void unsortMiss()
{

    sorting();
    miss();
}

bool sorted()
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

void findMiss()
{
    if (sorted())
    {
        cout << "sorted working \n";
        miss();
    }
    else
    {
        cout << "unsorted working \n";
        unsortMiss();
    }
}

int main()
{
    findMiss();
    return 0;
}
