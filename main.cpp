#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    double a, b;
    cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
           double max;
      if (a>b)
      {
          max=a;
      }
      else {
        max=b;
      }
           int min;
      if (a>b)
      {
          min=a;
      }
      else {
        min=b;
      }
    return 0;
}
