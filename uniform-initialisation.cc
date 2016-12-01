// classes and uniform initialisation
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) {radius=r;}
    double circum() {return 2*radius*3.14159265;}
};

int main () {

  Circle foo (10.0);	// funtional form
  Circle bar = 20.0;	// assignment unit.
  Circle baz {30.0};    // uniform unit.
  Circle qux = {40.0};	// POD-like

  cout << "foo's circumference: " << foo.circum() << endl;
  return 0;
}
