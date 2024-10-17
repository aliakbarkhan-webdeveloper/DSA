#include <iostream>
using namespace std;

char str1[] = {'m', 'e', 'd', 'i', 'c', 'a', 'l', '\0'};
char str2[] = {'d', 'e', 'c', 'i', 'm', 'a', 'l', '\0'};
int hashedArray[25] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

bool checkAnagram()
{

    for (size_t i = 0; str1[i] != '\0'; i++)
    {
        int idx = str1[i] - 97;
        hashedArray[idx]++;
    }

    for (size_t i = 0; str2[i] != '\0'; i++)
    {
        int idx = str2[i] - 97;
        hashedArray[idx]--;
    }

    for (size_t i = 0; i < 26; i++)
    {

        if (hashedArray[i] != 0)
        {
            cout << "These two strings are not anagrams";
            return false;
        }
    }

    cout << "These two string are anagram to each other.";
    return true;
}

int main()
{
    bool res = checkAnagram();
    cout << "\n"
         << res;
    return 0;
}
