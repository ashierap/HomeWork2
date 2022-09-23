/*1.	1.	Write a program that reverse the given words in a string 
array. Your program must return a new string array with the reverse 
words and print the new string. For example, if one the word in your 
array is car, then your new array will contain the word rac. (10 pts) */

// Inlcude all needed packages
#include <iostream>
#include <string>


using namespace std;

int main()
{
 // use the following array of string for your program.
 string words[6] = {"object","oriented","programming","sciences","dedication","commitment"};
 int array_size = (sizeof(words)/sizeof(words[0]));
 string result_array[6];

 for (int array_element = 0; array_element < array_size; array_element++)
 {
    string test = words[array_element];
    int str_size = test.length();

    string result = "";
    for (int old_index = 0; old_index < str_size; old_index++)
    {
        char letter;
        letter = test[(str_size - 1) - old_index];
        result += letter;
        result_array[array_element] = result;
    }
    cout << result_array[array_element] << " ";
 }

 return 0;
}
