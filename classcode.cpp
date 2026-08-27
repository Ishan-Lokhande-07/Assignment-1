#include<iostream>
using namespace std;
#include<string>
class Student
{
    public: //specifier
    string name;
    int roll_no;
    float marks;

    void accept()
        {
            cout<<"Name of the Student: ";
            cin>>name;

            cout<<"Roll no: ";
            cin>>roll_no;

            cout<<"Marks: ";
            cin>>marks;

        }
    void Result()
        {
            if(marks>=40)
                {
                    cout<<"PASS";
                }
            else
                {
                    cout<<"FAIL";
                }
        }  
    void display()
        {
            cout<<"\n----Details----"<<endl;
            cout<<"Name is: "<<name<<endl;
            cout<<"Roll no:"<<roll_no<<endl;
            cout<<"Marks: "<<marks<<endl;
            Result();
        }
};

int main()
 {
    Student s;
    s.accept();
    s.display();
    return 0;
 }