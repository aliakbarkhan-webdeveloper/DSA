#include <iostream>
using namespace std;

int arr[6] = {1, 2, 3, 4, 7, 6};

int n = 6;
void miss()
{
    int h = arr[n - 1];
    int l = arr[0];
    int diff = l - 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            cout << "missing element is " << i + diff;
            break;
        }
    }
}

void sorting()
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            arr[i] = arr[i + 1];
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
        miss();
    }
    else
    {
        unsortMiss();
    }
}

int main()
{

    findMiss();

    return 0;
}
