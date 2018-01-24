#include <iostream>

using namespace std;

int main()
{
    int ones, twos, fives, tens, twentys, fiftys, euros, twoeuros;

    cout << "How many 1 cents coins do you have: ";
    cin >> ones;
    cout << "How many 2 cents coins do you have: ";
    cin >> twos;
    cout << "How many 5 cents coins do you have: ";
    cin >> fives;
    cout << "How many 10 cents coins do you have: ";
    cin >> tens;
    cout << "How many 20 cents coins do you have: ";
    cin >> twentys;
    cout << "How many 50 cents coins do you have: ";
    cin >> fiftys;
    cout << "How many euro coins do you have: ";
    cin >> euros;
    cout << "How many two euro coins do you have: ";
    cin >> twoeuros;

    cout << "\nYou have " << ones << " 1-cent " << (ones > 1 ? "coins" : "coin") << endl;
    cout << "You have " << twos << " 2-cent " << (twos > 1 ? "coins" : "coin") << endl;
    cout << "You have " << fives << " 5-cent " << (fives > 1 ? "coins" : "coin") << endl;
    cout << "You have " << tens << " 10-cent " << (tens > 1 ? "coins" : "coin") << endl;
    cout << "You have " << twentys << " 20-cent " << (twentys > 1 ? "coins" : "coin") << endl;
    cout << "You have " << fiftys << " 50-cent " << (fiftys > 1 ? "coins" : "coin") << endl;
    cout << "You have " << euros << " 1-euro " << (euros > 1 ? "coins" : "coin") << endl;
    cout << "You have " << twoeuros << " 2-euro " << (twos > 1 ? "coins" : "coin") << endl;

    double sum = (ones * 0.01 + twos * 0.02 + fives * 0.05 + tens * 0.1 + twentys * 0.2 + fiftys * 0.5 + euros + twoeuros * 2);
    cout << "\nTotal sum: " << sum << " euro!\n";

    return 0;
}
