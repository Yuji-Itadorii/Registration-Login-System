#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    cout<<"Enter your choice : \n 1.Resgistration \n 2.Login\n\n";
    short int choice;
    cin>>choice;
    if (choice==1)
    {
        string username , password;
        cout<<"Enter your username:- \n";
        cout<<"Rules of Username : \n 1.It must not have any special charator\n2.It must not have any space between the name\n";
        cin>>username;
        cout<<"\nEnter your password\n";
        cout<<"Rules of Password : \n 1.It must not be more than 8 characters\n2.It should have special characters\n";
        cin>>password;

        ofstream file;
        file.open(username+".txt");
        file<<username<<endl<<password;
        file.close();
    }
    else{

    }   
    return 0;
}