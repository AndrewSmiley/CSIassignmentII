//
//  Room.h
//  CSIProgrammingAssignmentII
//
//  Created by Andrew Smiley on 5/28/14.
//  Copyright (c) 2014 Andrew Smiley. All rights reserved.
//

#ifndef __CSIProgrammingAssignmentII__Room__
#define __CSIProgrammingAssignmentII__Room__

#include <iostream>

class Room {
    
public:
    //constructor
    Room();
    
    double calculateTotalArea();
    /*
     Encapsulation methods for length
     */
    void setLength(double l);
    double getLength();
    
    /*
     Encapsulation methods for width
     */
    void setWidth(double w);
    double getWidth();
    
    /*
     Encapsulation methods for height
     */
    void setHeight(double h);
    double getHeight();
    
    
    
    
private:
    double length;
    double width;
    double height;
    
    
    
};


#endif /* defined(__CSIProgrammingAssignmentII__Room__) */


