#include <iostream>
#include "functionMultiply.h"
#include "functionAdd.h"
using std::cout;

int main (int argc, char *argv[]) 
{ 
  int result = Multiply(Add(3,4), Add(1,6));
  cout << "Result: " << result << "\n";
  
  if(result == 49)
  {
    cout << "Success";
  }
    
  return 0;
} 
