#include <iostream>
#include <iomanip> // for setprecision()

using namespace std;

class Cylinder {
  private:
    double radius, height;

  public:
    void read() {
      cout << "Enter the radius of the cylinder: ";
      cin >> radius;
      cout << "Enter the height of the cylinder: ";
      cin >> height;
    }

    double surfaceArea() {
      return 2 * 3.142 * radius * (radius + height);
    }
};

int main() {
  Cylinder c;
  c.read();
  double surfaceArea = c.surfaceArea();

  cout << fixed << setprecision(5); // sets output precision to 5 decimal places
  cout << "The surface area of the cylinder is: " << surfaceArea << endl;

  return 0;
}

