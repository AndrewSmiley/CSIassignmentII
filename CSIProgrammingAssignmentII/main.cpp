//
//  main.cpp
//  CSIProgrammingAssignmentII
//
//  Created by Andrew Smiley on 5/28/14.
//  Copyright (c) 2014 Andrew Smiley. All rights reserved.
//
#include "Room.h"
#include "Paint.h"
#include <iostream>

using namespace std;

/*
 Function to help us validate against input from cin.
 double var - The variable we wish to assign from the value from cin
 string message - The message we wish to display to the user to alert them that their input was not valid
 */
void validateCinDouble(double var, string message){
    double newVar;
    while(!cin.good()){
        
        cout << message;
        cin.clear();
        cin.ignore(100000, '\n');
        cin>>newVar;
        
    }
    //assign the value of the new variable to the value of the variable we wish to set
    var = newVar;
    
}

int main(int argc, const char * argv[])
{
    bool shouldEnd = false;
    cout << "Welcome!\r\rToday we will calculate your painting needs"<<endl;
    while (!shouldEnd) {
        double height, width, length;
        Room room;
        Paint paint;
        //begin getting information
        cout<<"First, we need to gather some information"<<endl;
        cout<<"Please enter the length of the room in feet (decimals are OK): ";
        cin >>length;
        //now we do the validation, loop until we get valid input
        if(!cin.good()) {
            validateCinDouble(length, "\r\rNot a valid length. Please enter the length of the room in feet: ");
        }
        

        
        //once we've gotten the length, let's get the width
        cout <<"Next, we need the width of the room. Please enter the width of the room in feet: ";
        cin >> width;
        if (!cin.good()) {
            validateCinDouble(width, "\r\rNot a valid width. Please enter a valid width: ");
        }
        
        //gather information about the height of the room
        cout << "Finally, we need to get the height of the room. Please enter the height of the room in feet: ";
        cin >> height;
        if(cin.good()){
            validateCinDouble(height, "\r\rNot a valid height. Please enter the height of the room in feet: ");
        }
        
        /*
         Being gathering information about the paint
         */
        cout<<"Now, we need to gather some information about the paint.\r\r";
        cout << "How many coats of paint do you wish to apply?: ";
        cin >> paint.coats;
        //validate the integer input
        while (!cin.good()) {
            cout << "\r\rNot a valid input. Please enter the number of coats as a whole number :";
            cin.clear();
            cin >> paint.coats;
        }
        
        //gather information about the cost
        cout << "Next, what is the cost of the paint in dollars? Please omit the $ character: ";
        cin >> paint.cost;
        //validate
        if (!cin.good()) {
            validateCinDouble(paint.cost, "\r\rNot a valid cost. Please enter the cost of the paint, omitting the $ character: ");
        }
        
        //gather information
        cout << "Finally, we need the estimated amount of paint used per square foot. Please enter the amount of paint per square foot as an integer or decimal value: ";
        cin >>paint.gallonsPerFoot;
        if (cin.good()) {
            validateCinDouble(paint.gallonsPerFoot, "\r\rNot a valid input. Please enter the amount of paint per square foot as an integer or decimal value: ");
        }
        

        
        
        
        
        
        
        
        
        
        
        
        
    }
    



    
    return 0;
}

