// Samuel Peel  
// CSCI 130
// 10-2-22
#include <iostream>
using namespace std;   
double powerGen (double, double);
int main() 
{
  double H, Q, P;

  cin >> H;
  cin >> Q;

  P = powerGen (H, Q);

    cout << P << endl;

  return 0;
}

double powerGen (double H, double Q)
{
  double power, p, g;
  g = 9.81;
  p = 1000;

  power = p*H*Q*g; 

  return power;
}
  
// The function is looking for two doubles, H and Q. H and Q are input in the main() function, and then grabed for the powerGen() function. powerGen then uses those two variable to evaluate power, which was defined as equal to P in the main() function.