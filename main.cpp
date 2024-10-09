#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstString, secondString, concatenatedString;

    // Repeat x3
    for (int i = 1; i <= 3; i++) {
        cout << "Input pair " << i << ":" << endl;

        // first string input
        cout << "Enter the first string: ";
        getline(cin, firstString);

        // second string input
        cout << "Enter the second string: ";
        getline(cin, secondString);

        // concatenate
        concatenatedString = firstString + secondString;

        // display result
        cout << "Concatenated string: " << concatenatedString << endl;

        // on third iteration, don't ask for enter key twice
        if (i < 3) {
            cout << "\nPress Enter to continue to the next input..." << endl;
            cin.get();  // wait for enter key to allow viewing results before moving on
        }
    }

    // final message before exiting the program after the third input
    cout << "\nConcatenations completed. Press Enter to exit." << endl;
    cin.get();  // wait for enter key

    return 0;
}