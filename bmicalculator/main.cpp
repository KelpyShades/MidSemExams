#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Welcome Message
    cout << "@....WELCOME....@\n" << endl;
    cout << "@....BMI CALCULATOR....@\n" << endl;

    //Variable Declaration
    float weight;
    float height;
    float bmi;
    float decision;
    string error = "Invalid Input, Please Try Again";

    //First Loop..Ensures that the input is never Zero or Negative
    while (true){
        while (true){
            cout << "Enter Your Weight (In Kilograms): ";
            cin >>weight;
            if (weight<=0){
                cout <<error<< endl;
                continue;
            }else{
                break;
            }
        }

        //Second Loop..Ensures that the input is never Zero or Negative
        while (true){
            cout << "Enter Your Height (In Meters): ";
            cin >>height;
            if (height<=0){
                cout <<error<< endl;
                continue;
            }else{
                break;
            }
        }

        //Calculations
            bmi=weight/pow(height,2);

        //Conditional Statements to display the users BMI and the corresponding interpretation
        if (bmi<18.5){
            cout<<"\nYour BMI is: "<<bmi<< endl;
            cout << "You Are Underweight" << endl;
        }else if (bmi>=18.5 && bmi<=24.9){
            cout<<"\nYour BMI is: "<<bmi<< endl;
            cout << "You Have A Normal Weigth" << endl;
        }else if (bmi>=25.0 && bmi<=29.9){
            cout<<"\nYour BMI is: "<<bmi<< endl;
            cout << "You Are Overweight" << endl;
        }else if (bmi>30.0){
            cout<<"\nYour BMI is: "<<bmi<< endl;
            cout << "You Are Obese" << endl;
        }else{
            return 0;
        }
    cout << "\nDo you want to calculate for another person?"<< endl;
    cout << "1.True"<<endl;
    cout << "2.False" << endl;
    cin>>decision;
    if (decision==1){
        cout << "Okay wait...\n" << endl;
        continue;
    }else{
        break;
    }
    return 0;
}
}
