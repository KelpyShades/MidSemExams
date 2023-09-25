#include <iostream>
#include <iomanip>
#include <thread>

using namespace std;

int main()
{

    string firstName,lastName;
    float hourRate;
    float hours;
    string errorText = "\nSorry, Your Input Cant Be Negative..Enter A Valid Input.";
    string abuseError = "\nYour Have Been Abused, Please Contact Any Human Resource Agency And Make A Report.";

    const float tax = 0.1;
    const int nhis = 50;
    const int allawa = 100;

    cout << " @@@..Worker's Grosspay Calculator..@@@\n" << endl;

    cout <<"Enter First Name: ";
    cin>>firstName;
    cout <<"Enter Last Name: ";
    cin>>lastName;
    cout <<"Enter Hourly Working Rate: ";
    cin>>hourRate;

    const float overtimeRate = hourRate*1.5;
    int plan;
    float wh;
    float mh;
    float grossPay;
    float netPay;

    while (true) {
    cout <<"\n...Select Your Hour Format..." << endl;   //Various Payment Plans
    cout <<"1. Hours Per Week."<< endl;
    cout <<"2. Hours Per Month."<< endl;
    cout <<"\n: ";
    cin>>plan;
        if (plan==1) {
            while (true) {
                cout <<"\nTotal Working Hours In A Week: ";
                cin>>wh;
                hours = wh * 4.43;
                if (wh>=0){
                    if (wh>=0 && wh<=40) {
                        grossPay = hours * hourRate;
                    }else if (wh>40 && wh<=84) {
                        float extradiff = hours - 40;
                        grossPay = (40 * hourRate) + (extradiff * overtimeRate);
                    }else{
                        cout <<abuseError<< endl;
                        return 0;
                    }
                    break;
                }else{
                    cout <<errorText<< endl;
                    continue;
                }
            }
            break;
        }else if (plan==2) {
            while (true){
                cout <<"\nTotal Working Hours In A Month: ";
                cin>>mh;
                hours = mh;
                if (mh>=0){
                    if (mh>0 && mh<=177.2) {
                        grossPay = hours * hourRate;
                    }else if (mh>177.2 && mh<=372.12) {
                        int extradiff = hours - 177.2;
                        grossPay = (177.2 * hourRate) + (extradiff * overtimeRate);
                    }else {
                        cout <<abuseError<< endl;
                        return 0;
                    }
                    break;
                }else{
                    cout <<errorText<< endl;
                    continue;
                }
            }
            break;
        }else {
            cout <<"Invalid Entry Try Again\n";
            continue;
        }
    }

    int taxAmount = grossPay*tax;
    int amount = taxAmount+nhis;
    int finalGrossPay = grossPay-amount;
    netPay = finalGrossPay+allawa;

    cout << "\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << endl;
    cout <<"\nEmployee Name: "<<firstName<<" "<<lastName<< endl;
    cout <<"\nTotal Working Hours This Month: "<<hours<< endl;
    cout <<fixed<<setprecision(2)<<"\nGross Pay before deductions: "<<"Gh Cedis "<<grossPay<< endl;
    cout <<fixed<<setprecision(2)<<"\nGross Pay after deductios: "<<"Gh Cedis "<<netPay<< endl;

    return 0;
}
