#include <iostream>
using namespace std;

// now we are going to search miising elements from unsorted arrays without sorting it
// O(n)
// SC--> O(n^2)
// We will use hashing technique

int arr[7] = {1, 4, 5, 9, 10, 14, 15};
int n = 7;
int hashedArr[14] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int hashLength = 14;

void miss()
{
    for (int i = 0; i < n; i++)
    {
        hashedArr[arr[i]]++;
    }

    for (int i = 1; i < hashLength; i++)
    {
        if (hashedArr[i] == 0)
        {
            cout << "Missing elements are: " << i << "\n";
        }
    }
}

int main()
{

    miss();
    return 0;
}
