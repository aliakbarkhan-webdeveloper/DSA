
#include <iostream>
using namespace std;

int arr[5] = {4, 7, 9, 1, 0};

bool find(int key)
{
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (key == arr[i])
        {
            cout << "it is present at index " << i << "\n";
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{

    cout << find(1);
    return 0;
}
