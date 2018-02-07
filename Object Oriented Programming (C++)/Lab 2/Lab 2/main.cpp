#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <math.h>

using namespace std;

const double dollar = 1.25;
const double yen = 135.41;
const double sterling = 0.88;
const double yuan = 7.83;

double to_euro(double, string);
double from_euro(double, string);

vector<double> amountEuros;

int main()
{
    double amount, exchangedTo, largest = 0, smallest = 9999999, sum = 0;
    string currency;

    while(currency != "exit") // Keep looping
    {
        cin >> amount >> currency; // Accept inputs
        if (currency == "exit") break;
        cin.clear(); // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (cin.fail()) // If the input failed, error and go back to the start of the loop
        {
            cout << "Please enter a valid amount and currency!" << endl;
            continue;
        }

        exchangedTo = to_euro(amount, currency);
        if (isnan(exchangedTo))
        {
            cout << "Please enter a valid currency!" << endl;
            continue;
        }

        sum += to_euro(amount, currency);
        amountEuros.push_back(exchangedTo);

        cout << exchangedTo << " euro";
        if (exchangedTo > largest)
        {
            largest = exchangedTo;
            cout << " - New largest value " << largest << endl;
        }
        else if (exchangedTo < smallest)
        {
            smallest = exchangedTo;
            cout << " - New smallest value " << smallest << endl;
        }
        else cout << "\n";
    }

    if (sum > 0)
    {
        cout << "\nLowest Value: " << smallest << " - Largest Value: " << largest;
        cout << "\nNumber of values entered: " << amountEuros.size();
        cout << "\nSum in euro: " << sum;
        cout << "\nSum in dollars: " << from_euro(sum, "dollars");
        cout << "\nSum in yen: " << from_euro(sum, "yen");
        cout << "\nSum in sterling: " << from_euro(sum, "sterling");
        cout << "\nSum in yuan: " << from_euro(sum, "yuan") << endl;

        cout << "\nValues (in euro): ";
        sort(amountEuros.begin(), amountEuros.end());
        for (int x = 0; x < amountEuros.size(); x++)
        {
            cout << amountEuros[x] << ", ";
        }
    }

    return 0;
}

double to_euro(double amount, string currency)
{
    if (currency == "dollars")
    {
        return amount / dollar;
    }
    else if (currency == "yen")
    {
        return amount / yen;
    }
    else if (currency == "sterling")
    {
        return amount / sterling;
    }
    else if (currency == "yuan")
    {
        return amount / yuan;
    }
    else return nan("");
}

double from_euro(double amount, string currency)
{
    if (currency == "dollars")
    {
        return amount * dollar;
    }
    else if (currency == "yen")
    {
        return amount * yen;
    }
    else if (currency == "sterling")
    {
        return amount * sterling;
    }
    else if (currency == "yuan")
    {
        return amount * yuan;
    }
    else return nan("");
}

