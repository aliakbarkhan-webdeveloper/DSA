#include <iostream>
using namespace std;

// find power with recursion
// int pow(int m, int n)
// {

//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {

//         return pow(m, n - 1) * m;
//     }
// }

// //find power by using less time complexity--> used divide and conquer
int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n % 2 == 0)
    {
        return pow(m * m, n / 2);
    }
    else
    {
        return m * pow(m * m, (n - 1) / 2);
    }
}
int main()
{
    cout << pow(2, 9);
    return 0;
}
