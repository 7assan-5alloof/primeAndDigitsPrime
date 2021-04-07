#include <iostream>
#include <cmath>

using namespace std;

bool prime(int);
bool primeDigits(int);
int main()
{
    // Get data from user
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    // Use absolute value of possibly negative input
    number = abs(number);

    // Exclude composite numbers
    if (!(prime(number)))
    {
        cout << "The number is not prime";
        return 0;
    }

    // Check if the number's digits are prime
    if (primeDigits(number)) cout << "The number is prime";

    return 0;
}

bool prime(int number)
{
    if (number == 0 || number == 1) return false; // Exclude 0 & 1 from the process
    for (int i = 2; i < int(sqrt(number)); i++) if (number % i == 0) return false; // IF statement will be executed if a factor was found
    return true; //  A composite number won't bring the function up to this point... The number is definitley prime
}

bool primeDigits(int number)
{
    while (number > 0)
    {
        int digit = number % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) return true;
    }
    return false;
}
