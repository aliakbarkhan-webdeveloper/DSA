#include <iostream>
using namespace std;

// //Printing in ascending
// int rec(int n)
// {

//     if (n <= 0)
//     {
//         return 0;
//     }

//     rec(n - 1);
//     std::cout << "program is working "<<n<<" times" << std::endl;
// }
// //printing in descending
// int rec2(int n)
// {

//     if (n <= 0)
//     {
//         return 0;
//     }

//     std::cout << "program is working "<<n<<" times" << std::endl;
//     rec2(n - 1);
// }

// static variables in function

// int staticRec(int n){

// if (n>0)
// {

//     int a=staticRec(n-1)+n;
//     std::cout << a << std::endl;
//     return a;
// }
// return 0;

// }

// tree recursion
//  int Treec(int n){
//      if(n==0){
//          return 0;
//      }
//      cout << n<<" " ;
//  Treec(n-1);
//  Treec(n-1);
//  }

// Indirect Recursion
//  void indRecB(int n);
//  void indRecA(int n){
//  if(n>=0)
//  {
//      std::cout << n<<" " ;
//      indRecB(n-1);
//  }

// }
// void indRecB(int n){
// if(n>0)
// {
//     std::cout << n <<" ";
//     indRecA(n/2);
// }

// }

// Nested Recrusion
int nestedRec(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        nestedRec(nestedRec(n + 11));
    }
}

int main()
{
    int a = nestedRec(90);
    std::cout << a << std::endl;

    return 0;
}
