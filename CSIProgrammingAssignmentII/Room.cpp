//
//  Room.cpp
//  CSIProgrammingAssignmentII
//
//  Created by Andrew Smiley on 5/28/14.
//  Copyright (c) 2014 Andrew Smiley. All rights reserved.
//
#include <iostream>
#include "Room.h"
using namespace std;


Room::Room(){
    cout << "Room constructed"<<endl;
    
}

double Room::getHeight(){
    return height;
}

void Room::setHeight(double h){
    height = h;
}

double Room::getLength(){
    return length;
}

void Room::setLength(double l){
    length = l;
}

double Room::getWidth(){
    return width;
}

void Room::setWidth(double w){
    width = w;
}

double Room::calculateTotalArea(){
    return length+width+height;
}

