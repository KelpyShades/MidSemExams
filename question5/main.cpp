#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "...Program To Check The Eligibility To Vote By Age..." << endl;
    cout << "\nEnter Your Age: ";
    cin >>x;
    y = 18-x;
    if (x >= 18) {
        cout << "\nCongratulations!! You Eligible To Vote" << endl;
    }else {
        cout << "\nSorry, You Are Not Eligible To Vote, Try Again After "<<y<<" Year(s)" << endl;
    }
    return 0;
}
