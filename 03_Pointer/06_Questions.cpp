#include <iostream>
using namespace std;

// //Ques 1
// int calculateLength(const char *str) {
//     int length = 0;
//     // Calculate the length of string
// }

// //Ques 2
// bool isPalindrome(const char *str) {
// // Check for palindrome

// }

//Ques 3
void modifyString(char *str)
{
    while (*str)
    {
    if (*str >= 'a' && *str <= 'z')
    {
    *str = *str - 'a' + 'A';
    }
    str++;
    }
}

//Ques 4
void concatenateAndPrint(char *str1, const char *str2)
{
    while (*str1)
    {
    str1++;
    }
    while ((*str1 = *str2))
    {
    str1++, str2++;
    }
}


int main() {
    // //Ques 1
    // const char *myString = "Hello, World!";
    // cout << "Length of the string: " <<calculateLength(myString) << endl;

    // //Ques 2 
    // const char *palindrome1 = "level";
    // const char *palindrome2 = "hello";
    // cout << "Is '" << palindrome1 << "' a palindrome? " <<
    // (isPalindrome(palindrome1) ? "Yes" : "No") <<endl;
    // cout << "Is '" << palindrome2 << "' a palindrome? " <<
    // (isPalindrome(palindrome2) ? "Yes" : "No") <<endl;
    
    //Ques 3
    char myString[] = "hello World";
    modifyString(myString);
    cout << myString <<endl;
    // return 0;


    //Ques 4
    char first[] = "Good";
    const char second[] = "Morning";
    concatenateAndPrint(first, second);
    cout << first;
    // return 0;


    return 0;
}