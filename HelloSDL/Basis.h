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
    T& operator[] (const short index);
    
private:
    T _first;
    T _second;
};


// Points in Z2
class Point {
    
    Int x;
    Int y;
    
    Point() {
        this->initWithXY(0, 0);
    }
    
    Point(Int x, Int y) {
        this->initWithXY(x, y);
    }
    
private:
    
    void initWithXY(Int x, Int y) {
        this->x = x;
        this->y = y;
    }
};

// Aliases
typedef Point Z2;

#endif /* math_h */
