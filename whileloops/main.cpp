#include <iostream>

using namespace std;

int main()
{
    cout<<"program to sum non negative numbers"<<endl;
    int num =0,sum=0;
            cout<<"Enter a non negative number: "<<endl;
    cin>>num;
      do{
        sum =sum+num;
        //take input from the user again
        cout<<"Enter the non negative number: ";
            cin >>num;
    }while (num>=0);
    cout<<"The sum of the negative numbers = "<<sum<<endl;
    return 0;
}
