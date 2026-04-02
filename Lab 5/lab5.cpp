#include <iostream>

using namespace std;

double calculate_Sn_cpp(int n) {

    if (n == 0) {
        return 0.0;
    }
    
    double sign = (n % 2 != 0) ? 1.0 : -1.0;
    
    return (sign / n) + calculate_Sn_cpp(n - 1);
}

int main() {
    int n;
    
    cout << "Enter the value of n: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    double result = calculate_Sn_cpp(n);
    
    cout << "The result of S_" << n << " is: " << result << endl;
    
    return 0;
}