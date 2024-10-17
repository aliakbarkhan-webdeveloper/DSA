#include <iostream>
using namespace std;

char s[] = {'a', 'b', 'c', '\0'};

void permentation(int k)
{
    static int arr[10] = {0};
    static char res[10];
    int i;

    if (s[k] == '\0')
    {
        res[k] = '\0';
        printf("%s \n", res);
    }
    else
    {

        for (size_t i = 0; s[i] != '\0'; i++)
        {
            if (arr[i] == 0)
            {
                res[k] = s[i];
                arr[i] = 1;
                permentation(k + 1);
                arr[i] = 0;
            }
        }
    }
}

int main()
{

    permentation(0);
    return 0;
}
