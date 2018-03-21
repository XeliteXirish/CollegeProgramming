#include <iostream>
#include <fstream>

#define TEMP_MAX 10
#define TEMP_MIN -5
#define TOTAL_HOURS 12

using namespace std;

double getTempAtTimeMins(double time);
double calculateSlope();
void writeToFile(int time, double temp);

ofstream outputFile;

int main()
{
    outputFile.open("raw_temps.txt");

    for (int x = 0; x <= (TOTAL_HOURS * 60); x++) {
        double temp = getTempAtTimeMins(x);
        writeToFile(x, temp);
    }
    outputFile.close();

    return 0;
}

void writeToFile(int time, double temp) {
    outputFile << time << "\t" << temp << endl;
}

double getTempAtTimeMins(double time) {
    double c = 5; // Y point at X = 0
    double timeMins = (time / (TOTAL_HOURS * 60 / (TEMP_MAX - TEMP_MIN)));
    return (calculateSlope() * timeMins) - c;
}

double calculateSlope() {
    return ((TEMP_MAX - TEMP_MIN) / TOTAL_HOURS);
}
