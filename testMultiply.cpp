#include <iostream>
#include "function.h"
using std::cout;

// Doing some unit testing
int main (int argc, char *argv[]) 
{
  int result = 0;
    for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 10; j++)
      {
          result = Multiply(i, j);
          cout << "i: " << i << " * j: " << j " = " << result; 
          if(result != i*j)
          {
            cout << "Testing multiply failed";
          }
      }
    }
} 
