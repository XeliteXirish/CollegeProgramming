#include <iostream>
#include <vector>

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
    int x;
    double amount, exchangedTo, amountOfValues = 0, largest = 0, smallest = 9999999, sum = 0;
    string currency;

    while(cin >> amount >> currency) {
        if (currency == "exit") return 0;
        if (cin.fail() || amount == 0) {
            cout << "Please enter a valid amount and currency!\n";
            continue;
        }

        exchangedTo = to_euro(amount, currency);
        if (exchangedTo == 0) {
            cout << "Please enter a valid currency!\n";
            break;
        }

        sum += amount;
        amountOfValues++;

        cout << exchangedTo << " euro";
        if (exchangedTo > largest) {
            largest = exchangedTo;
            cout << " - New largest value " << largest << endl;
        }else if (exchangedTo < smallest) {
            smallest = exchangedTo;
            cout << " - New smallest value " << smallest << endl;
        }else cout << "\n";
    }

    if (sum > 0) {

        cout << "\nLowest Value: " << smallest << " - Largest Value: " << largest;
        cout << "\nNumber of values entered: " << amountOfValues;
        cout << "\nSum in euro: " << sum;
        cout << "\nSum in dollars: " << from_euro(sum, "dollars");
        cout << "\nSum in yen: " << from_euro(sum, "yen");
        cout << "\nSum in sterling: " << from_euro(sum, "sterling");
        cout << "\nSum in yuan: " << from_euro(sum, "yuan") << endl;
    }

    return 0;
}

double to_euro(double amount, string currency)
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
    else return 0;
}

double from_euro(double amount, string currency)
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
    else return 0;
}

