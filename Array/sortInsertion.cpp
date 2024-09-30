#include <iostream>
using namespace std;

int arr[6] = {1, 2, 3, 5, 6};
int length = sizeof(arr) / 4;
void insert(int val)
{

    for (int i = 0; i < length; i++)
    {
        if (arr[i - 1] < val && arr[i] > val)
        {
            arr[i+1]=arr[i];
            arr[i]=val;
        }
        if (arr[i]==arr[i-1])
        {
            
        }
        
    }
    
}

int main()
{

    insert(4);

    return 0;
}
