#include <iostream>
using namespace std;

int arr[5] = {1, 2, 3, 4, 5};

void set(int idx, int val)
{
    if (idx >= 0)
    {
        arr[idx] = val;
        return;
    }
}

int main(int argc, char const *argv[])
{

    cout << arr[4] << "\n";
    set(4, 666666);
    cout << arr[4] << "\n";
    return 0;
}
