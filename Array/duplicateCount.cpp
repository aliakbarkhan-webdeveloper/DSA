#include <iostream>
using namespace std;

int arr[6] = {1, 3, 3, 5, 6, 6};
int n = 6;

void duplicate()
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            int j = i + 1;
            while (arr[j] == arr[i])
                j++;

            cout << arr[i] << " is value is repeated " << j - i << " times.\n";
            i = j - 1;
        }
    }
}

int main()
{
    duplicate();
    return 0;
}
