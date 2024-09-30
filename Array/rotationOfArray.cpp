#include <iostream>
using namespace std;

int arr[5] = {1, 2, 3, 4, 5};
int length = sizeof(arr) / 4;

void rotate()
{
    int temp = arr[0];
    for (int i = 0; i < length; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[length - 1] = temp;

    cout << arr[0] << "\n";
    cout << arr[4];
}

int main()
{
    cout << arr[0] << "\n";
    cout << arr[4] << '\n';
    rotate();
    return 0;
}
