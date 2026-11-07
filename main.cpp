#include <iostream>
using std::cout, std::endl;
#include "car.h"

int main() {
  Car carA("Car A", 100, 0);
  Car carB("Car B", 95, 0);

  carA.drive(5);
  carB.drive(5);

  cout << "Car A has travelled " << carA.getDistance() << " units." << endl;
  cout << "Car B has travelled " << carB.getDistance() << " units." << endl;
}
