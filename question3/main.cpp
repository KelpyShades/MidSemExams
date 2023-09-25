#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter Number: ";
    cin>>number;
    if (number>0){
        cout <<"The Number Is Positive"<< endl;
    }else if (number<0){
        cout << "The Number Is Negative"<< endl;
    }else{
        cout << "The Number Is Zero" << endl;
    }
    return 0;
}
