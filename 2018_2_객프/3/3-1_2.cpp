#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double input;
    // Get value from the user
    cout << "Enter number: ";
    cin >> input;
    // Compute the square root
    double root = sqrt(input);
    // Report result
    cout << "Square root of " << input << " = " << root << '\n';
}
