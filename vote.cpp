#include<iostream>
using namespace std;
 int main()
{
    string name,pname;
    int age;
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Your Age: ";
    cin>>age;
    if(age>=18)
    {
        int num;
        cout<<"Hello "<<name<<" you are eligible for voting!"<<endl;
        cout<<"Please enter your mobile number: "<<endl;
        cin>>num;
        cout<<"Please Enter The Party Name you wish to Vote For: "<<endl;
        cin>>pname;
        cout<<"Thank you "<<name<<" for voting "<<pname<<endl;
    }
    else
    {
     cout<<"Sorry "<<name<<" you are NOT eligible for voting since your age is "<<age<<"!!";
    }
}
