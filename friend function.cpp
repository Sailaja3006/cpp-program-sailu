#include <iostream>
using namespace std;

inline bool isVowel(char ch)
{
    ch = tolower(ch);

    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u');
}

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isVowel(ch))
        cout << ch << " is a Vowel";
    else
        cout << ch << " is a Consonant";

    return 0;
} 
 
 
 
