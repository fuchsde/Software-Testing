#include <iostream>
#include "function.h"
using std::cout;

int main (int argc, char *argv[]) 
{ 
  cout << "Hello World\n";
  cout << "Getting it done\n";
  
  int result = Multiply(2, 3);
  cout << "Result: " << result;
  
  return 0;
} 
