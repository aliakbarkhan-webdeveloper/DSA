#include <iostream>
using namespace std;

void changeCase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] <= 90 && str[i] >= 65)
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 122)
        {
            str[i] -= 32;
        }
        i++;
    }

    for (size_t j = 0; j != '\0'; j++)
    {
        std::cout << str[i];
    }
}

int main()
{
    char str[] = {'a', 'L', 'i', '\0'};
    changeCase(str);
    return 0;
}
