#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    
    void draw(Painter& painter) const;
    
private:
    Velocity velocity;
    Point center;
    double radius;
    double mass;

};
