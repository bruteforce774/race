#pragma once
#include <string>

class Car {
  private:
    std::string name;
    int speed;
    int distance;
  public:
    Car(std::string nm, int sp, int dst);
    void drive(int turns);
    int getDistance() const;
};
