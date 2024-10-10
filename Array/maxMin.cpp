#include <iostream>
using namespace std;

int arr[7] = {2, 6, 9, 3, 0, 1, 8};
int n = 7;
void maxMin()
{
    int max = arr[0];
    int min = arr[0];

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << "The maximum value in array is: " << max << std::endl;
    std::cout << "The minimum value in array is: " << min << std::endl;
}

int main()
{

    maxMin();

    return 0;
}
