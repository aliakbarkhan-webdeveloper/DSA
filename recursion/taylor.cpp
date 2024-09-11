#include <iostream>
using namespace std;

// calculation of taylor series--> we will use static valriables to solve taylor series --> O(n^2)

// double ty(double x, double n){
//     static double P=1, F=1;
//     double r;
//     if(n==0){
//         return 1;
//     }else{
//         r=ty(x,n-1);
//         P=P*x;
//         F=F*n;
//         return r+P/F;
//     }
// }

// Taylor series by using Horner's Rule-->O(n)--> can be done in ascending order

// double ty(double x, double n ){
//     static double S;
// if (n==0)
// {
//     return S;
// }
// S=1+x/n*S;
// return ty(x,n-1);
// }

// Horner's rule by using loop

double ty(double x, double n)
{
    double S = 1;
    int i;
    double num = 1;
    double den = 1;
    for (i = 1; i <= n; i++)
    {
        num *= x;
        den *= i;
        S += num / den;
    }
    return S;
}

int main()
{

    cout << ty(1, 10);

    return 0;
}
