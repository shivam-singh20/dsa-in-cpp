#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

void creating_file()
{
    // Creating a file and writing in it

    ofstream file("example.txt");

    if(!file.is_open())
    {
        cout<<"Unable to create or read that file.";
    }

    int n;
    cout<<"Enter Size of the array: ";
    cin>>n;
    cout<<"Enter elements of array:"<<endl;

    vector<int>arr(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    file<<"Originally array was:\n";
    for(int i=0; i<n; i++)
    {
        file<<arr[i]<<" ";
    }

    file<<"\nAfter sorting array becomes:\n";
    sort(arr.begin(),arr.end());

    for(int i=0; i<n; i++)
    {
        file<<arr[i]<<" ";
    }

    file.close();
}

void reading_file()
{
    ifstream file("example.txt"); //Open the file
    if(!file.is_open())
    {
        cout<<"Unable to locate that file.";
    }

    string line;

    while(getline(file,line))
    {
        cout<<line;
    }

    file.close();
}

int main()
{
    creating_file();
    // reading_file();
}