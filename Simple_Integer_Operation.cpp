#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int b = 6;

    cout << "Initial values: a = " << a << ", b = " << b << "\n\n";

    int sum = a + b;     
    cout << "Addition: " << sum << "\n";      
    
    int difference = a - b;    
    cout << "Subtraction: " << difference << "\n";
    
    int product = a * b; 
    cout << "Multiplication: " << product << "\n";       
    int quotient = a / b;       
    cout << "Division: " << quotient << " (integer division)\n";
    int remainder = a % b;   
    cout << "Modulo: " << remainder << " (remainder)\n\n";   

    int c = 10;
    cout << "Original c             : " << c << "\n";
    cout << "Post-increment         : " << c++ << " (c is now " << c << ")\n";
    cout << "Pre-increment          : " << ++c << " (c is now " << c << ")\n";
    cout << "Decrement              : " << --c << " (c is now " << c << ")\n";

    return 0;
}