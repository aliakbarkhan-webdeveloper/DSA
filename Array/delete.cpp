#include <iostream>
using namespace std;

int arr[6] = {1, 2, 3, 4, 5, 6};

void remove(int idx)
{

    for (int i = idx; i < sizeof(arr); i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[sizeof(arr)-1]=-1;
}
int main(int argc, char const *argv[])
{

    remove(2);
    cout << arr[2];
    return 0;
}
