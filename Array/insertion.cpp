#include <iostream>
using namespace std;

int a[5] = {1, 2, 3};
int length=3;

void insert(int idx, int val)
{
    for (int i = length; i > idx; i--)
    {
        a[i] = a[i - 1];
    }
    a[idx]=val;
    length++;
}
int main(int argc, const char **argv)
{

   insert(4, 19);
cout<<a[3];
    return 0;
}