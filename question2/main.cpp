#include <iostream>

using namespace std;

int main()
{
    cout << "Simple Login System" << endl;
    //default username and password
    const string username = "admin";
    const string password = "password123";
    string x;
    string y;
    //loops
    while(true){
    cout<< "Please Enter Your login Details\n" << endl;
    cout<< "Username: ";
    cin>>x;
    cout<< "Password: ";
    cin>>y;
    //conditions
    if (x==username && y==password){
        cout << "Login Successful" << endl;
        break;
    }else {
        cout << "Login Failed" << endl;
        continue;
    }
    }
    return 0;
}
