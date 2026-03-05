#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "-- task 1 --" << endl;
    int number;
    int steps = 0;
    cout << "enter a positive integer greater than 1: ";
    cin >> number;

    while (number > 1) {
        cout << number << " -> ";
        if (number % 2 == 0) {
            number = number / 2;
        } else {
            number = (number * 3) + 1;
        }
        steps++;
    }
    cout << 1 << endl;
    cout << "total steps: " << steps << endl;


    cout << "\n-- task 2 --" << endl;
    int n;
    while (true) {
        cout << "enter a number between 10 and 100: ";
        cin >> n;
        if (n >= 10 && n <= 100) {
            break;
        }
        cout << "invalid input. ";
    }

    int fizz = 0, buzz = 0, fizzbuzz = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            continue;
        }
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
            fizzbuzz++;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
            fizz++;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
            buzz++;
        } else {
            cout << i << endl;
        }
    }
     cout << " " << endl;
    cout << "- summary -" << endl;
    cout << "Fizz count: " << fizz << endl;
    cout << "Buzz count: " << buzz << endl;
    cout << "FizzBuzz count: " << fizzbuzz << endl;


    cout << "\n-- task 3 --" << endl;
    int x;
    cout << "Enter a number (3-9): ";
    cin >> x;
    for (int i = 1; i <= 2 * x - 1; i++) {
        int stars = x - abs(x - i); 

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}