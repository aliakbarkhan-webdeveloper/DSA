#include <iostream>

int length(char str[])
{
    int ln = 0;

    while (str[ln] != '\0')
    {
        ln++;
    }
    return ln;
}

int main()
{

    char str[] = {'a', 'l', 'i', '\0'};
    int ln = length(str);
    std::cout << ln;
    return 0;
}
