#include <iostream>
using namespace std;
// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate the forward difference table
void calculateForwardDifferenceTable(double x[], double y[], double forwardDifferenceTable[][10], int n) {
    // Initialize the first column with the y-values
    for (int i = 0; i < n; i++)
        forwardDifferenceTable[i][0] = y[i];

    // Calculate the forward difference table
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            forwardDifferenceTable[i][j] = forwardDifferenceTable[i + 1][j - 1] - forwardDifferenceTable[i][j - 1];
        }
    }
}

// Function to calculate the interpolation value
double interpolate(double x[], double forwardDifferenceTable[][10], int n, double targetX) {
    double result = forwardDifferenceTable[0][0];
    double term = (targetX - x[0]) / (x[1] - x[0]);
    double productTerm = term;

    for (int i = 1; i < n; i++) {
        result += (productTerm * forwardDifferenceTable[0][i]) / factorial(i);
        productTerm *= (term - i) / (i + 1);
    }

    return result;
}

int main() {
    int n;

    cout<< "Enter the number of data points: ";
    cin>> n;

    double x[10];
    double y[10];

    cout << "Enter the data points:\n";
    for (int i = 0; i < n; i++) {
        cout<< "x[" << i << "]: ";
        cin>> x[i];
        cout<< "y[" << i << "]: ";
        cin>> y[i];
    }

    double forwardDifferenceTable[10][10];

    calculateForwardDifferenceTable(x, y, forwardDifferenceTable, n);

    double targetX;
    cout<< "Enter the value of x to interpolate: ";
    cin>> targetX;

    double interpolatedValue = interpolate(x, forwardDifferenceTable, n, targetX);

    cout<< "Interpolated value at x = " << targetX << ": " << interpolatedValue <<endl;

    return 0;
}

