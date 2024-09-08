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

//static variables in function

int staticRec(int n){

if (n>0)
{
    
    int a=staticRec(n-1)+n;
    std::cout << a << std::endl;
    return a;
}
return 0;

}
int main()
{
 printf("%d",staticRec(5));
   
    return 0;
}
