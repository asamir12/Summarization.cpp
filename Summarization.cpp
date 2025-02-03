#include <iostream>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  cout << fixed << setprecision(6);

  int n, y, z;
  cin >> n >> y >> z;
  cout << n << " " << y << " " << z << '\n' << endl;

  string name;
  cin >> name;
  cout << "Hello" << " " << name << '\n';
  cout << "----------" << '\n';

  int a = 5, b = 2;
  cout << a / b << '\n';
  cout << a % b << '\n';
  cout << (double) a / b << '\n';
  cout << (int)ceil((double) a / b) << '\n';
  cout << (int)floor((double) a / b) << '\n';
  cout << (int)round((double) a / b) << '\n';
  cout << "----------" << '\n';

  bool can = a > 4 && b == 3;
  cout << can << '\n';
  bool can2 = a > 4 || b == 3;
  cout << can2 << '\n';
  bool can3 = a != 3 && !(a == 3);
  cout << can3 << '\n';
  bool can4 = a <= 5 || b >= 3;
  cout << can4 << '\n';
  cout << "----------" << '\n';

  double x;
  cin >> x;
  cout << fixed << setprecision(3) << x << '\n';
  cout << (double) a / b << '\n';
}