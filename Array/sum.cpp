#include <iostream>
using namespace std;

// Sum of all elements of array

int sum(int arr[], int n)
{

    if (n < 0)
    {
        return 0;
    }
    static int total = 0;

    int t = sum(arr, n - 1);
    total = arr[n] + t;
    return total;
}

int main()
{
    int arr[] = {5, 5, 5, 5, 5, 5};
    cout << sum(arr, 5);
    return 0;
}
