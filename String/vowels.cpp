#include <iostream>
using namespace std;
char str[] = {'A', 'L', 'I', 'A', 'K', 'B', 'A', 'R', 'O', 'N', 'I', '\0'};

void vowel()
{
    int consonents = 0;
    int vowels = 0;
    int counter = 0;
    while (str[consonents] != '\0')
    {
        if ((str[consonents] == 'a' || 'A') || (str[consonents] == 'e' || 'E') || (str[consonents] == 'i' || 'I') || (str[consonents] == 'o' || 'O') || (str[consonents] == 'u' || 'U'))
        {
            vowels++;
        }
        else
        {
            counter++;
        }

        consonents++;
    }
    cout << "The number of vowels in the string are: " << vowels << "\n";
    cout << "The number of consonents in the string are: " << counter << "\n";
    cout << "The length of characters in the string s: " << consonents << "\n";
}

int main()
{

    vowel();

    return 0;
}
