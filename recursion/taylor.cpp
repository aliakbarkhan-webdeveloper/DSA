#include <iostream>
using namespace  std;


//calculation of taylor series--> we will use static valriables to solve taylor series

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




int main()
{
   
cout<<ty(1,10);


    return 0;
}
