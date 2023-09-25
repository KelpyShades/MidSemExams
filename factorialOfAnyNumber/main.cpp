#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Factorial Of Any Number" << endl;
    cout << "Enter Number: ";
    cin >> x;

    int factorial[x+1];  // Create an array to store factorial results
    factorial[0] = 1;    // Initialize factorial[0] to 1

    for (int i = 1; i <= x; i++) {
        factorial[i] = i * factorial[i - 1]; // Calculate factorial[i] based on previous result
    }

    cout << "Factorial of " << x << " is: " << factorial[x] << endl;

    return 0;
}
