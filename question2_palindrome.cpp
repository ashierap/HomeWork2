/*2.	2.	Write a program that find if a given string is a Palindrome 
or not. A  palindrome is a word, number, phrase, or other sequence of 
characters which reads the same backward as forward. For example, the 
given words are radar, level, rotor, kayak palindromes. Your program 
will return, for example “Yes, the radar is a palindrome” or “No, 
the word house is not a palindrome”. (10 pts) */

#include <iostream>
#include <string>


using namespace std;

int main()
{
    string pal;
    string pal_check = "";

    cout << " \n Enter a word to check if it is a palindrome: ";
    cin >> pal;

    int str_size = pal.length();
    for (int old_index = 0; old_index < str_size; old_index++)
    {
        char letter;
        letter = pal[(str_size - 1) - old_index];
        pal_check += letter;
    }

    if (pal.compare(pal_check) == 0)
        cout << " Yes, the word " << pal << " is a palindrome." << endl << " ";
    else
        cout << " No, the word " << pal << " is not a palindrome." << endl << " ";
 return 0;
}
