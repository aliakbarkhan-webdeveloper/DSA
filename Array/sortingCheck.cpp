#include <iostream>
using namespace std;

int arr[6] = {1, 2, 3, 5, 8, 7};
int length = sizeof(arr) / 4;
bool isSort()
{

    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {

            return false;
        }
    }

    return true;
}

int main()
{
    bool result = isSort();
    cout << result;

    return 0;
}
