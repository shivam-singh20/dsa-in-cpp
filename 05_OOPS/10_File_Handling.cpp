#include<iostream>
#include<fstream>
using namespace std;

// fstream - Libraries for handling file just like iostream.
// ofstream - Used to read and write the file at the same time.
// ifstream - Used to read data from file.

class creating_file {
    public:
        void create_file()
        {
            ofstream file("example.txt");

            if(file.is_open())
            {
                file<<"Hi I am a Simple text file.";
                file.close();
                cout<<"File is created sucessfully and message is written.";
            }

            else
            {
                cout<<"Not able to create a file.";
            }
        }
};

class reading_file {
    public:
        void read_file()
        {
            ifstream fin;

            //Open the file and then read contents inside the file
            fin.open("example.txt");

            string line;

            while(getline(fin,line))
            {
                cout<<line;
            }
            fin.close(); // Free up all the resources.
        }
};



class removing_file {
    public:
        void remove_file()
        {
            remove("example.txt");
        }
};

int main()
{
    // creating_file obj;
    // obj.create_file();

    // reading_file R;
    // R.read_file();

    removing_file rem;
    rem.remove_file();
}