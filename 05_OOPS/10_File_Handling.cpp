#include<iostream>
#include<fstream>
using namespace std;

// fstream - Libraries for handling file just like iostream.
// ofstream - Used to read and write the file at the same time.
// ifstream - Used to read data from file.

void creating_file()
{
    ofstream Hello("Shivam.cpp");

    if(Hello.is_open())
    {
        Hello<<"My name is Shivam Kumar Singh.";
        Hello.close();
        cout<<"File created sucessfully.";
    }

    else
    {
        cout<<"File cannot be created sucessfully.";
    }
}

void removing_file()
{
    remove("Shivam.cpp");
    remove("example.txt");
    cout<<"Both files removed sucessfully";
}

int main()
{
    // ofstream file("Example.txt");

    // if(file.is_open())
    // {
    //     file<<"Hello World";
    //     file.close();
    //     cout<<"File has been created";
    // }

    // else
    // {
    //     cout<<"Unable to create a file";
    // }
    // return 0;

    removing_file();
}