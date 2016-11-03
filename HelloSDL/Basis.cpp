//
//  Basis.cpp
//  Rectilinear Polygon Partitioning
//
//  Created by Gabe Montague on 11/3/16.
//  Copyright © 2016 Student. All rights reserved.
//

#include <stdio.h>
#include <stdexcept>

#include "Basis.h"

template <typename T>
Pair<T>::Pair(T first, T second) {
    _first = first;
    _second = second;
}

template <typename T>
T& Pair<T>::operator[] (const short index)
{
    if (index > 1 || index < 0) {
        throw std::invalid_argument("Pair index out of range");
    }
    return index == 1 ? _first : _second;
}
