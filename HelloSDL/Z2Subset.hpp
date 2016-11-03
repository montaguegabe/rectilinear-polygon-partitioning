//
//  Z2Subset.hpp
//  Rectilinear Polygon Partitioning
//
//  Created by Gabe Montague on 11/3/16.
//  Copyright © 2016 Student. All rights reserved.
//

#ifndef Z2Subset_hpp
#define Z2Subset_hpp

#include "math.h"

class Z2SubsetContinuous;

class Z2Subset {
    
public:
    Sequence<Z2SubsetContinuous> groups;
};

class Z2SubsetContinuous {
    
    Set<Point> points;
    
public:
    
};

#endif /* Z2Subset_hpp */
