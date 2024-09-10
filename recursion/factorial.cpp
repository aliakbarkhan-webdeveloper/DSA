#include <iostream>
using namespace std;
int fec(int n){
    if(n==0){
        return 1;
    }else{
        return fec(n-1)*n;
    }
    
}
 int main(){
       cout<<fec(5);
        return 0;
    }