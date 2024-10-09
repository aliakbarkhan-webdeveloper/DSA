#include <iostream>
using namespace std;

int arr[6] = {1, 3, 3, 5, 6, 6};
int n = 6;

void duplicate()
{
    int duplicate = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != duplicate)
        {
            cout << "The duplicate is: " << arr[i] << "\n";
            duplicate = arr[i];
        }
    }
}

int main()
{
    duplicate();
    return 0;
}
