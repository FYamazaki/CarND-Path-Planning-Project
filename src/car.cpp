#include <algorithm>
#include <iostream>
#include "car.h"
#include <cmath>
#include <map>
#include <string>
#include <iterator>

/**
 * Initializes Vehicle
 */

Car::Car(){}

Car::Car(int id, double x, double y, double vx, double vy, double s, double d) {
    this->id = id;
    this->lane = (int) d /4;
    this->x = x;
    this->y = y;
    this->vx = vx;
    this->vy = vy;
    this->s = s;
    this->d = d;
    this->v = sqrt(vx*vx + vy*vy);
}

Car::~Car() {}
