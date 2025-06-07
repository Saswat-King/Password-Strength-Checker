#include <iostream>
#include <string>

using namespace std;



bool hasNumber(const string& str)
{
    for(char c : str)
    {
        if(c>='0'&& c<='9')
        {
            return true;
        }
    }
    return false;
}


bool hasSpecialChar(const string& str)
{
    string specialChars = "!@#$%^&*()-_=+[]{};:'\",.<>/?\\|";

    for(char c : str)
    {
        for(char sc : specialChars)
        {
            if(c == sc)
            {
                return true;
            }
        }
    }
    return false;
}



int main()
{
    string password;

    cout<<"Enter your password: ";
    getline(cin,password);

    if(password.length()<6)
    {
        cout<<"Password is too short! Must be at least 6 characters"<<endl;
    }
    else if(!hasNumber(password))
    {
          cout<<"Password should contain at least one number"<<endl;
    }
    else if(!hasSpecialChar(password))
    {
        cout<<"Password should contain at least one special character"<<endl;
    }
    else
    {
       cout<<"Your password is strong enough!"<<endl;
    }

    return 0;
}