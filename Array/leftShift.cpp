#include <iostream>
using namespace std;

int arr[5] = {1, 2, 3, 4, 5};
int length = sizeof(arr) / 4;

void leftShift()
{

    for (int i = 0; i < length; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[length - 1] = -1;
    cout << arr[4];
}

int main()
{

    leftShift();
    /* code */
    return 0;
}
