#include <iostream>
using namespace std;

int arr[6] = {1, 2, 3, 4, 5, 6};

int length = sizeof(arr) / 4;

int reverse()
{
    int temp;
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    std::cout << arr[5] << std::endl;
    return 0;
}

int main()
{

    reverse();

    return 0;
}
