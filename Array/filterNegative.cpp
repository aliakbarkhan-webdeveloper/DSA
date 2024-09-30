#include <iostream>
using namespace std;

int arr[6] = {-1, 2, -3, 4, 5, -7};
int length = sizeof(arr) / 4;

void filter()
{

    int j = length - 1;
    int i = 0;
    while (i < j)
    {

        while (arr[i] < 0)
        {
            i++;
        }

        while (j >= 0)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
}

void display(){
    for (int i = 0; i < length-1; i++)
    {
        cout<<arr[i];
    }
    
}
int main()
{
filter();
display();
    return 0;
}
