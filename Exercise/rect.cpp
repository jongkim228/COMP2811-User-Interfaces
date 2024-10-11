#include <iostream>
#include "rect.hpp"

Rectangle::Rectangle(double width, double height)
    : Rectangle(0,0,width,height) {}

Rectangle::Rectangle(double x, double y, double width, double height)
    : xorigin(x),yorigin(y), width(width),height(height) {}