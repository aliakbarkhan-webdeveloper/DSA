#include <iostream>
using namespace  std;


//calculation of taylor series--> we will use static valriables to solve taylor series

// int ty(int x, int n){
//     static int P=1, F=1;
//     int r;
//     if(n==0){
//         return 1;
//     }else{
//         r=ty(x,n-1);
//         P=P*x;
//         F=F*n;
//         return r+P/F;
//     }
// }


int main()
{
   
cout<<ty(2,4);


    return 0;
}
