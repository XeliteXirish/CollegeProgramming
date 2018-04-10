#include <iostream>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void fillVector();
double calculateMean();
double calculateMedian();

vector<double> tempStore;

int main()
{
    fillVector();

    cout << "Mean = " << calculateMean() << "\nMedian = " << calculateMedian() << endl;

    return 0;
}

void fillVector() {
    ifstream inputFile;
    inputFile.open("raw_temps.txt");

    double time = 0, temp = 0;
    while(inputFile >> time >> temp) {
        tempStore.push_back(temp);
    }
    if (inputFile.eof()) return;
    inputFile.close();
}

/**
    Returns the mean value of the tempStore vector
**/
double calculateMean() {
    double total = 0, items = 0;
    for(vector<double>::const_iterator i = tempStore.begin(); i != tempStore.end(); ++i) {
        total += *i;
        items++;
    }
    return total / items;
}

/**
    Returns the median value of the tempStore vector
**/
double calculateMedian() {
    sort(tempStore.begin(), tempStore.end());
    if (tempStore.size() % 2 == 0) {
      return (tempStore[tempStore.size() / 2 - 1] + tempStore[tempStore.size() / 2]) / 2;
    } else {
      return tempStore[tempStore.size() / 2];
    }
}




