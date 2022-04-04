#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool usernameValidator(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((int)s[i]==32)
        {
            return true;
        }
        else if (((int)s[i] >= 65 && (int)s[i] <= 90) || ((int)s[i] >= 97 && (int)s[i] <= 122))
        {
            count++;
        }
    }
    if (count == s.size())
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool passwordValidator(string s)
{
    if (s.size() > 8)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << "Enter your choice : \n 1.Resgistration \n 2.Login\n\n";
    string choice;
    getline(cin,choice);
    if (choice[0]=='1' )
    {
        string username, password;
        cout << "Rules of Username : \n1.It must not have any special charator\n2.It must not have any space between the name\n";
        cout << "Enter your username:- \n";
        getline(cin,username);
        if (usernameValidator(username))
        {
            cout << "Invalid Username entered!!\n";
            return 0;
        }

        cout << "Rules of Password : \n1.It must not be more than 8 characters\n2.It should have special characters\n";
        cout << "\nEnter your password\n";
        getline(cin,password);
        if (passwordValidator(password))
        {
            cout << "Password length more than 8 characters!!\n";
            return 0;
        }

        ofstream file;
        file.open(username + ".txt");
        file << username << endl
             << password;
        file.close();
    }
    else
    {
    }
    return 0;
}