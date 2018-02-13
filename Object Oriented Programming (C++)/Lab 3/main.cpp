#include <iostream>
#include <stdexcept>

using namespace std;

// Converts Celsius to Kelvin
double ctok(double c)
{
    if(c < -273.15) throw invalid_argument("Temperature must be above absolute zero!");
    double k = c + 273.15; // K was originally an int
    return k; // Original just returned 'int' and no semicolon
}

double ktoc(double k)
{
    return k - 273.15;
}

int main()
{
    try
    {
        double c = 0, k;
        string unit;

        cin >> c >> unit; // D wasnt defined
        if(unit == "k") k = ctok(c); // Was passing string "c" instead of variable
        else k = ktoc(c);

        cout << k << ((unit == "k") ? "C" : "K") << endl; // cout was spelt incorrectly
    }
    catch(const invalid_argument e)
    {
        cout << "Temperature must be above absolute zero!" << endl;
    }
}

/**
Error fixs
double ctok(double c)
{
    if(c < -273.15) throw invalid_argument("Temperature must be above absolute zero!");
    double k = c + 273.15; // K was originally an int
    return k; // Original just returned 'int' and no semicolon
}

int main()
{
    double c = 0;
    cin >> c; // D wasnt defined
    double k = ctok(c); // Was passing string "c" instead of variable
    cout << k << endl; // cout was spelt incorrectly
}
**/
