#include <iostream>
using namespace std;
int arr[8] = {3, 4, 3, 10, 1, 9, 12, 2};
int n = 8;
void findDuplicate() // O(n^2)
{

    int count = 1;
    int dulplicateValue = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[j] != -1)
            {
                count++;
                dulplicateValue = arr[j];
                arr[j] = -1;
            }
        }
    }
    cout << "The number " << dulplicateValue << " is repeated " << count << " times";
}
int main()
{
    findDuplicate();
    return 0;
}
