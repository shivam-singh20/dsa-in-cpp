#include <iostream>
using namespace std;

bool isRotated(string str1, string str2)
    {
        // Your code here
        int n = str1.length();
        bool clockwise = true, anticlockwise = true;
        for (int i = 0; i < n; i++)
        {
            if (str1[i] != str2[(i + 2) % n])
            {
                clockwise = false; // not rotated clockwise
                break;
            }
        }
 
        for (int i = 0; i < n; i++)
        {
            if (str1[(i + 2) % n] != str2[i])
            {
                anticlockwise = false; // not rotated anticlockwise
                break;
            }
        }
 
        return clockwise or anticlockwise; // if any of both is true, return true
    }

int main (){
    string s1 = "SHIVAM", s2 = "sMSHIV";
    cout<<isRotated(s1,s2);   
    return 0;
}