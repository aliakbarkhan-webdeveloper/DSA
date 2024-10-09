#include <iostream>
using namespace std;

int arr[6] = {1, 2, 3, 4, 5, 7};

int n = 6;
void miss()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << "\n";
    int s = (n * (n + 1)) / 2;
    cout << s << "\n";
    int result = s - sum;
    cout << "missing element is " << result;
}


void unsortMiss(){
    
}

int main()
{

    miss();

    return 0;
}
