// Include the input-output stream library
#include <iostream>

// Use the standard namespace to avoid prefixing standard library names with "std::"
using namespace std;

// Main function - execution of the program starts here
int main() {
    // Declare an integer variable named 'number'
    int number;

    // Output a message to the console
    cout << "Enter an integer: ";

    // Read an integer input from the user and store it in the variable 'number'
    cin >> number;

    // Output the value of 'number' to the console
    cout << "You entered: " << number << endl;

    // Return 0 to indicate that the program ended successfully
    return 0;
}
