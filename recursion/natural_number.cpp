#include <iostream>
using namespace std;

// find sum recursively -> more time and space
//  int sum(int n){

//     if(n==0){
//         return 0;
//     }else{
//         return sum(n-1)+n;
//     }
// }


// sum by using formula -->   O(n)
int sum(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    int sumN = sum(5);

    cout << sumN;

    return 0;
}
