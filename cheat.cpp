#include <iostream>
#include <cstring>

class Point {
private:
    int x;
    int y;

public:
Point(){
    
}
    Point(int x, int y) : x(x), y(y) {}

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }
};

class Polygon {
private:
    Point* points;
    int count;
    static int numPolygons;

public:
    Polygon(Point* p, int c) : points(new Point[c]), count(c) {
        for (int i = 0; i < c; i++) {
            points[i] = p[i];
        }
        numPolygons++;
    }

    ~Polygon() {
        delete[] points;
        numPolygons--;
    }

    static int getNumPolygons() {
        return numPolygons;
    }

    double area() const {
        // Calculate and return the area of the polygon (0.0 for now).
        return 0.0;
    }
};

int Polygon::numPolygons = 0;

int main() {
    Point pointsArray[] = {Point(0, 0), Point(1, 1), Point(2, 2)};
    Polygon polygon1(pointsArray, 3);

    std::cout << "Number of polygons: " << Polygon::getNumPolygons() << std::endl;
    std::cout << "Area of polygon1: " << polygon1.area() << std::endl;

    Point pointsArray2[] = {Point(0, 0), Point(3, 3), Point(4, 4)};
    Polygon polygon2(pointsArray2, 3);

    std::cout << "Number of polygons: " << Polygon::getNumPolygons() << std::endl;

    return 0;
}
