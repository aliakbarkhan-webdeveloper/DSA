#include <iostream>
using namespace std;
int n;
int arr[10] = {34, 67, 23, 21, 0, 7, 3, 0};

int get(int index)
{
    if (index>=0&&index<n)
    {
         return arr[index];
    }
    return -1;
   
}

int main(int argc, char const *argv[])
{

    cout << get(5);

    return 0;
}
