#include <iostream>
using namespace std;

int arr[10] = {2, 6, 8, 8, 10, 12, 15, 15, 15, 20};
int n = 10;
int hashArr[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int hashArrLength = 20;

void duplicate()
{
    for (int i = 0; i < n; i++)
    {
        hashArr[arr[i]]++;
    }

    for (int i = arr[0]; i <= hashArrLength; i++)
    {
        if (hashArr[i] > 1)
        {
            cout << i << " is repeated " << hashArr[i] << " times.\n";
        }
    }
}

int main()
{
    duplicate();
    return 0;
}
