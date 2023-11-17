#include <iostream>
#include <vector>

using namespace std;

// Lagrange Interpolation function
double LagrangeInterpolation(vector<double> x, vector<double> y, double x0) {
  double L = 0.0;
  for (int i = 0; i < x.size(); i++) {
    double product = 1.0;
    for (int j = 0; j < x.size(); j++) {
      if (i != j) {
        product *= (x0 - x[j]) / (x[i] - x[j]);
      }
    }
    L += y[i] * product;
  }
  return L;
}

int main() {
  // Define the x and y vectors
  vector<double> x = {2, 3, 17, 24};
  vector<double> y = {4, 7, 23, 31};

  // Calculate y(4) using Lagrange Interpolation
  double y4 = LagrangeInterpolation(x, y, 4);

  // Print the result
  cout << "y(4) = " << y4 << endl;

  return 0;
}