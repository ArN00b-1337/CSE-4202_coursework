#include<iostream>
using namespace std;

int power(int n, int p)
{
  int result=1;
  for(int i=0; i<p; i++){
    result = result*n;}
  return result;
}

int main()
{
  int n, p;
  cout << "Enter an integer: ";
  cin >> n;
  cout << "Enter the power: ";
  cin >> p;
  cout << n << " Powers " << p << " equals to " << power(n, p);
}
