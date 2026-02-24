#include<bits/stdc++.h>
using namespace std;

//Accessing variables from class using getter and setter when class is private in case;
class Student
{
    private:
        string name;
        int roll_number, age;
        string grade;
    
    public:
        void setname(string s){ //Function name can be different also
            name = s; //We can use variables of class in class itself like this
        }

        void setroll_number(int n){
            roll_number = n; //We can use variables of class in class itself like this
        }

        void setage(int a){
            age = a; //We can use variables of class in class itself like this
        }

        void setgrade(string s){
            grade = s; //We can use variables of class in class itself like this
        }

        //For printing using getter
        void getname(){
            cout<<"Name: "<<name<<endl;
        }

        void getage(){
            cout<<"Age: "<<age<<endl;
        }

        void getroll_number(){
            cout<<"Roll_number: "<<roll_number<<endl;
        }

        void getgrade(){
            cout<<"Grade: "<<grade<<endl;
        }

};

//You have to print name, roll_number, age and grade without modifing access modifier

int main()
{
    //Accessing the functions
    Student s1;

    s1.setname("Shivam");
    s1.setage(22);
    s1.setroll_number(1121194);
    s1.setgrade("A+");

    s1.getname();
    s1.getage();
    s1.getroll_number();
    s1.getgrade();
}