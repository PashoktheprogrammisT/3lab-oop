#ifndef OCTAGON_H
#define OCTAGON_H

#include "Figure.h"

class Octagon : public Figure {
private:
    double side_length;
    
public:
    Octagon() = default;
    Octagon(double side);
    Octagon(const std::vector<std::pair<double, double>>& verts);
    Octagon(const Octagon& other);
    
    std::pair<double, double> getCenter() const override;
    double getArea() const override;
    void printVertices() const override;
    void readFromStream(std::istream& is) override;
    
    Octagon& operator=(const Octagon& other);
    Octagon& operator=(Octagon&& other) noexcept;
    bool operator==(const Octagon& other) const;
    
    double getSideLength() const;
    
private:
    void calculateVertices();
};

#endif
