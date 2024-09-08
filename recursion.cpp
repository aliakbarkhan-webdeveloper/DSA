#include <iostream>
using namespace std;


//Printing in ascending
int rec(int n)
{

    if (n <= 0)
    {
        return 0;
    }

    rec(n - 1);
    std::cout << "program is working "<<n<<" times" << std::endl;
}
//printing in descending
int rec2(int n)
{

    if (n <= 0)
    {
        return 0;
    }

    std::cout << "program is working "<<n<<" times" << std::endl;
    rec2(n - 1);
}
int main()
{
    rec2(10);
    int a=rec(5);
    std::cout << a << std::endl;
    return 0;
}
