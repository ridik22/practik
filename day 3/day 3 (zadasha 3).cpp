#include <iostream>
#include <cmath>
using namespace std;
 
double rast(double x1, double y1, double x2, double y2)
{
 return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}
 
int main()
{
 int n = 10;
 double x[10];
 double y[10];
  double p = 0;
  for (int i = 0; i < n; i++)
 {
  printf("x%d, y%d: ", i + 1, i + 1);
  cin >> x[i] >> y[i];
 }
  for (int i = 0; i < n - 1; i++)
 {
  p += rast(x[i], y[i], x[i + 1], y[i + 1]);
 }
  p += rast(x[0], y[0], x[n - 1], y[n - 1]);
  cout << "result: " << p << endl;
 system("pause");
 return 0 ;
}
