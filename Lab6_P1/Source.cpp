//Kyle Anderson    -     10/26/2026          -         Create a program that outputs asteriks in the form of a swuare depending on the size the user inputs

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number for the length of your square: ";
    cin >> n;

    int i = 0;
    while (i < n) {
        // Print filled square row
        int j = 0;
        while (j < n) {
            cout << "*";
            j++;
        }

        cout << " ";

        // Print hollow square row
        int k = 0;
        while (k < n) {
            if (i == 0 || i == n - 1 || k == 0 || k == n - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
            k++;
        }

        cout << "\n";
        i++;
    }

    return 0;
}