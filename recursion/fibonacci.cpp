#include <iostream>
using namespace std;

// next value is sum of previos two values.

// Fib with Recursion --> O(2^n) -->this is exessive recursion bcz it is calculation same value multiple time which is using more time

// int rec(int n){
//     if (n<=1)
//     {
//         return n;
//     }

//     return rec(n-2)+rec(n-1);
// }

// feb by using recursion with memoization technique  -->O(n)
int F[10];
int rec(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = rec(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = rec(n - 1);
        }
        return F[n - 2] + F[n - 1];
    }
}

// fib with loop --> O(n)

// int rec(int n){
//     int To=0,T1=1,S,i;
//     if(n<=0) {return n;}

//     for( i = 2; i <= n; i++)
//     {
//         S=To+T1;
//         To=T1;
//         T1=S;
//     }
//     return S;
// }

int main()
{
    // loop is used for memoization, so delete it if you want to run anyother code
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        F[i] = -1;
    }

    std::cout << rec(10) << std::endl;

    return 0;
}
