// sum of square of n numbers

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter N: ";
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum += i * i;
  }
  cout << "Sum of square of n numbers : " << sum << endl;

  return 0;
}