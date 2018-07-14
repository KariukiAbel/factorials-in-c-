#include "iostream"
using namespace std ;

int main(int argc, char const *argv[]) {
  /* code */
  int factorial(int);
int mFact
int value;

std::cout << "Enter Number" << '\n';
std::cin >> value;
mFact=factorial(value);
std::cout << "The factorial is " << mFact<<'\n';

  return 0;
}

int factorial(int n)
{
if(n<0)
return(-1); /*Wrong value*/
if(n==0)
return(1);  /*Terminating condition*/
else
{
return(n*factorial(n-1));
}
}  
