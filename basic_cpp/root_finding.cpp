// the code should run in root prompt and also using c++ compiler.
// changing on 14th Jan, 2014
#include <iostream>
using namespace std;

// input function 
                                                                                                                                                              
void Input (float &x, float &y);

float a=1.0, b=1.0, result;
char operation;


int main ()
{
  cout << "Program which performs addition, subtraction, multiplication and subtraction. \n\n";

  cout << "Please input calculation operation (eg. 1 + 2): \n";
  cin >> a >> operation >> b;

  Input (a,b);

  cout << "The answer is: " << result << endl;
  system ("pause");
  return 0;
}

