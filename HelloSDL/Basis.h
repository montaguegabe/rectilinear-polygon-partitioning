//
//  math.h
//  Rectilinear Polygon Partitioning
//
//  Created by Gabe Montague on 11/3/16.
//  Copyright © 2016 Student. All rights reserved.
//

#ifndef math_h
#define math_h

// Implement integers with normal int sizes
typedef int Int;

// Implement real numbers with doubles
typedef double Real;

// Implement sequences with vectors
#include <vector>
template <typename T>
using Sequence = std::vector<T>;

// Implement sets with sets
#include <set>
template <typename T>
using Set = std::set<T>;

// Pair
template <typename T>
class Pair {
public:
    Pair(T first, T second);
    
    T first() { return _first; };
    T second() { return _second; };
    
    void setFirst(T val) { _first = val; };
    void setSecond(T val) { _second = val; };
    
    T& operator[] (const short index);
    
protected:
    T _first;
    T _second;
};

// Coordinate
template <typename T>
class Coordinate : Pair<T> {
public:
    Coordinate(Int x, Int y) : Pair<T>(x, y) {}
    
    T x() { return this->_first; };
    T y() { return this->_second; };
    void setX(T val) { this->_first = val; };
    void setY(T val) { this->_second = val; };
};

// Coordinate in Z2
class Z2 : Coordinate<Int> {
public:
    Z2(Int x, Int y) : Coordinate<Int>(x, y) {}
};
typedef Z2 Point;

// Coordinate in R2
class R2 : Coordinate<Real> {
public:
    R2(Real x, Real y) : Coordinate<Real>(x, y) {}
};

#endif /* math_h */
