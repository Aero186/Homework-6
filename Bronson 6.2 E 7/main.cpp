// Samuel Peel  
// CSCI 130
// 10-2-22
#include <iostream>
using namespace std;

double powerGen (double H, double Q);

int main() 
{
  
  double H, Q, P, p, g;
  
  g = 9.81;
  p = 1000;

  cin >> H;
  cin >> Q;

  P = p * Q * H * g;
  
  cout << powerGen << endl;
}