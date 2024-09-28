#include <iostream>
using namespace std;

int arr[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; int mid;
int binary(int Arr[],int l, int h, int key)
{

    if (l <= h){
        mid = (l + h) / 2;}

if (key = arr[mid])
{
    return mid;
}
else if (key < arr[mid])
{
    return binary(Arr,l, mid - 1, key);
}
else
{
    return binary(Arr,mid + 1, h, key);
}
return -1;
}
int main()
{
    cout<<binary(arr,arr[0],arr[sizeof(arr)-31],9)<<"\n";

    return 0;
}
