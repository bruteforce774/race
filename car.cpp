#include <iostream>
using std::cout, std::endl;
#include "car.h"

Car::Car(std::string nm, int sp, int dst)
  : name(nm), speed(sp), distance(dst)
{
  cout << "Name: " << name << endl
       << "Speed: " << speed << endl
       << "Distance: " << distance << endl;
}

void Car::drive(int turns) {
  distance += speed * turns;
}

int Car::getDistance() const {
  return distance;
}
