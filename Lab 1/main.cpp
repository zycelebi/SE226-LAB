#include <iostream>
#include <string>
using namespace std;
#include <cmath>


int main() {
    string name;
    string studentID;

    cout << "What is your name?" << endl;
    getline(cin, name);

    cout << "Hello " << name << "." << endl;

    cout << "What is your Student ID?" << endl;
    getline(cin, studentID);

    cout << "Your ID is " << studentID << endl;


    int total_seconds;

    cout << "Enter the total number of seconds: ";
    cin >> total_seconds;

    int hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;

    cout << total_seconds << " seconds is "
         << hours << " hours, "
         << minutes << " minutes, and "
         << seconds << " seconds." << endl;


    double x1, y1, x2, y2;

    cout << "Enter x1: ";
    cin >> x1;

    cout << "Enter y1: ";
    cin >> y1;

    cout << "Enter x2: ";
    cin >> x2;

    cout << "Enter y2: ";
    cin >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The distance between the points is "
         << distance << endl;


    cout << "*******\n"
         << " *****\n"
         << "  ***\n"
         << "   *" << endl;

    return 0;
}