#include <iostream>
#include <math.h> // pow
#include <fstream> // output file stream

using namespace std;

int main () {

int first, second;

cout << "Enter two integer : ";
cin >> first >> second; 

int width = pow(first, 2);
int height = pow(second, 2);
int z = width + height;
auto result = sqrt(z);

cout << "The Square root of (" << first << 
"^2 + " << second << "^2)" << " = " << result << endl;

ofstream makefile;
makefile.open ("week-5-lab.txt");
makefile << "Your triangle has 3 sides" << 
" that are " <<  first  << "cm, " <<  second  << 
"cm, and " << result << "cm";
makefile.close(); 

return 0;
}