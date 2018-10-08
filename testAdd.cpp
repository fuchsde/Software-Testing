#include <iostream>
#include "function.h"
using std::cout;

// Doing some unit testing
int main (int argc, char *argv[]) 
{
  int result = 0;
  int fail = 0;
    for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 10; j++)
      {
          result = Add(i, j);
          cout << "i: " << i << " + j: " << j << " = " << result << "\n"; 
          if(result != i + j)
          {
            fail = 1;
          }
      }
    }
  if(fail == 0)
  {
    cout << "Succes";
}
} 
