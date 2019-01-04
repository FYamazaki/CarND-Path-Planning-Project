#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <random>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Car {
public:

  int id;

  double x, y;

  double vx, vy;  // not ego-vehicle

  double d;

  int lane;

  double s;

  double v;

  /**
  * Constructor
  */
  Car();
  Car(int id, double x, double y, double vx, double vy, double s, double d);

  /**
  * Destructor
  */
  virtual ~Car();

};

#endif
