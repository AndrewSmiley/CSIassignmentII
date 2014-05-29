//
//  Paint.h
//  CSIProgrammingAssignmentII
//
//  Created by Andrew Smiley on 5/28/14.
//  Copyright (c) 2014 Andrew Smiley. All rights reserved.
//

#ifndef __CSIProgrammingAssignmentII__Paint__
#define __CSIProgrammingAssignmentII__Paint__

#include <iostream>
class Paint{
public:
    //constructor
    Paint();
    //the number of coats they wish to apply
    int coats;
    //the cost of the paint per gallon
    double cost, gallonsPerFoot;
    /*
     Function to help us calculate the total cost of the paint
     double paintNeeded- The total amount of paint needed
     double cost- the cost of the paint per gallon
     */
    double calculateCostOfPaint(double paintNeeded, double cost);
    
    /*
     Function to help us calculate the total amount of paint needed in gallons. 
     double area- the total area of the room
     int coats- the number of coats we wish to apply
     double gpf- the number of gallons of paint per square foot
     */
    double calculatePaintNeeded(double area, int coats, double gpf);
    
    
    
};
#endif /* defined(__CSIProgrammingAssignmentII__Paint__) */
