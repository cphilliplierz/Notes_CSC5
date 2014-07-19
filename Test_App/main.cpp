/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Testing Applications
 * Created on July 18, 2014, 11:08 AM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double factorial (unsigned); 

int main(int argc, char *argv[]) { 

// Declare Variables. 
unsigned x,d; 
long double e1 = 1.0; 

cout << "Enter the exponent of e : "; 
cin >> x; 

cout << "Desired Accuracy (number of terms in the series) : "; 
cin >> d; 

for (unsigned i = 1; i < d; i++) { 
e1 += (pow((double)x,(double)i) / factorial(i)); 
} 

cout << fixed << setprecision(10); 
cout << "Expected value : " << exp(7) << endl; 
cout << "Computed value : " << e1; 
cout << " (e^" << x << " with " << d << " terms)" << endl; 

return 0; 
} 

double factorial(unsigned n) { 
if (n == 1) return n; 
return n * factorial(n-1); 
}