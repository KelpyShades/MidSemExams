#include <iostream>
#include <cmath>

using namespace std;

const int MAX_PEOPLE = 100; // Maximum number of people to calculate BMI for

int main() {
    // Display welcome messages
    cout << "@....WELCOME....@\n" << endl;
    cout << "@....BMI CALCULATOR....@\n" << endl;

    // Arrays to store data for multiple people
    float weights[MAX_PEOPLE];
    float heights[MAX_PEOPLE];
    float bmis[MAX_PEOPLE];
    string interpretations[MAX_PEOPLE];

    int numPeople = 0; // Initialize the number of people to 0

    while (true) {
        // Check if the maximum number of people is reached
        if (numPeople >= MAX_PEOPLE) {
            cout << "Maximum number of people reached." << endl;
            break;
        }

        float weight, height, bmi;
        string interpretation, error = "Invalid Input, Please Try Again";

        // Input validation for weight
        while (true) {
            cout << "Enter Weight for Person " << numPeople + 1 << " (In Kilograms): ";
            cin >> weight;
            if (weight <= 0) {
                cout << error << endl;
                continue;
            } else {
                break;
            }
        }

        // Input validation for height
        while (true) {
            cout << "Enter Height for Person " << numPeople + 1 << " (In Meters): ";
            cin >> height;
            if (height <= 0) {
                cout << error << endl;
                continue;
            } else {
                break;
            }
        }

        // Calculate BMI
        bmis[numPeople] = weight / pow(height, 2);

        // Determine BMI interpretation
        if (bmis[numPeople] < 18.5) {
            interpretations[numPeople] = "Underweight";
        } else if (bmis[numPeople] >= 18.5 && bmis[numPeople] <= 24.9) {
            interpretations[numPeople] = "Normal Weight";
        } else if (bmis[numPeople] >= 25.0 && bmis[numPeople] <= 29.9) {
            interpretations[numPeople] = "Overweight";
        } else if (bmis[numPeople] > 30.0) {
            interpretations[numPeople] = "Obese";
        }

        // Display BMI and interpretation
        cout << "\nBMI: " << bmis[numPeople] << endl;
        cout << "Interpretation: " << interpretations[numPeople] << endl;

        // Increment the number of people
        numPeople++;

        int decision;
        // Ask if user wants to calculate for another person
        cout << "\nDo you want to calculate for another person?"<<endl;
        cout << "1.Yes" <<endl;
        cout << "2.No" <<endl;
        cin >> decision;

        if (decision==1){
            cout << "Okay wait...\n" << endl;
            continue;
        }else{
            break;
        }
    }

    // Display results for all people
    cout << "\nResults for all people:" << endl;
    for (int i = 0; i < numPeople; i++) {
        cout << "Person " << i + 1 << ": BMI=" << bmis[i] << ", Interpretation=" << interpretations[i] << endl;
    }

    return 0;
}
