/*3.3.	Write a program that finds the first non-repeated character 
in the given String, for example, if the given String is "aggregate" 
then the first non-repeated character is "r". Your program will return 
“first non-repeated character is "r". (10 pts)*/

#include <iostream>
#include <string>

using namespace std;


int main()
{
    string user_check;
    bool repeat = true;
    int str_length;
    int i = 0;

    cout << " Enter a string to find the first non-repeated character: ";
    cin >> user_check;

    str_length = user_check.length();

    while (repeat && (i < str_length))
        string letter = user_check.c_str()[i];
        user_check.erase(i,1);
        if((user_check.find(letter)) == npos)
           { repeat == false;
            user_check.insert(i, letter); }
        else
            {user_check.insert(i, letter); 
            i++;}
        ;
    if (repeat == false)
        cout << " The first non-repeated character is " << user_check[i] << "\n ";
    else
        cout << " All of the characters were repeated. " << "\n ";
    
    return 0;
}
