#include <iostream>
using namespace std;

int arrA[5] = {3, 8, 16, 20, 25};
int arrB[5] = {4, 10, 12, 22, 23};
int arrC[10];
int i, j, k = 0;

int Alength = sizeof(arrA) / 4;
int Blength = sizeof(arrB) / 4;

void merge()
{
    while (i < Alength && j < Blength)
    {
        if (arrA[i] < arrB[j])
        {
            arrC[k++] = arrA[i++];
        }
        else
        {
            arrC[k++] = arrB[j++];
        }
    }

    for (; i < Alength; i++)
    {
        arrC[k++] = arrA[i];
    }
    for (; j < Blength; j++)
    {
        arrC[k++] = arrB[j];
    }
}

int main()
{
    merge();
    cout << arrC[9];
    /* code */
    return 0;
}
