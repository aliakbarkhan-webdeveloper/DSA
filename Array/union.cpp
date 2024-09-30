#include <iostream>
using namespace std;

// when arrays are not sorted  --> O(n^2)
int arrA[5] = {};
int arrB[5] = {};
int unsortedUnion[10] = {};
void unsortUnion() {

};

// Whwn arrays are sorted  -->O(n)
int arrC[5] = {1, 2, 3, 4, 5};
int arrD[5] = {0, 2, 4, 6, 7};
int sortedArray[10] = {};

int m, n, o = 0;

int mLength = 5;
int nLength = 5;

void sortedUnion()
{
    if (arrC[m]<arrD[n])
    {
        sortedArray[o]=arrC[m];
    }else{
        sortedArray[o]=arrD[n];
    }
    
    while (m < mLength && n < nLength)
    {
        if (arrC[m]<arrD[n])
        {
            sortedArray[o++]=arrC[m++];
        }else if (arrC[m]==arrD[n])
        {
            sortedArray[o++]=arrC[m++];
            n++;
        }else{
            sortedArray[o++]=arrC[n++];
        }
        
for (; m < mLength; m++)
{
    sortedArray[o++]=arrC[m];
}
for (; n < nLength; n++)
{
    sortedArray[o++]=arrC[n];
}

    }
};

int main()
{

    sortedUnion();
    cout<<"the first element of the array is "<<sortedArray[7]<<" the last element of the array is  "<<sortedArray[9];

    return 0;
}
