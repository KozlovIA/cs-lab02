#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
           int max;
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
