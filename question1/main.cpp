#include <iostream>

using namespace std;

int main()
{
    cout << "Calculating The First N natural numbers using a for loop"<< endl;
    int sum = 0;
    int x;
    cout << "Number Of Natural Numbers: ";
    //user input
    cin >>x;
    //for loop
    for(int i=1; i <=x; i++){
        sum+=i;
    }
    //output
    cout<< "The sum of the first "<<x<< "natural numbers is: " <<sum<< endl;
    return 0;
}
