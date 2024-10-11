#pragma once

class Rectangle {
private:
    double width, height, xorigin, yorigin;

public:

    Rectangle(double width, double height,double width, double height); 

    Rectangle(double width, double height);
        

    double getX() const {
        return xorigin;
    }

    double getY() const {
        return yorigin;
    }

    double getWidth() const {
        return width;
    }
    
    double getHeight() const {
        return height;
    }

    double perimeter() const {
        return 2 * (width + height);
    }

    double area() const {
        return width * height;
    }
};
