



//Collier, R. "Lectures Notes for COMP1406C - Introduction to Computer Science II" [PDF documents].
//Retrieved from cuLearn: https://www.carleton.ca/culearn/ (Winter 2016).

//http://www.cplusplus.com/doc/boolean/


#include <iostream>


bool changeLight(bool& red, bool& yellow, bool& green);


bool changeLight(bool& red, bool& yellow, bool& green){
    //check if they are all true
    if ((red && green && yellow)){
            return false;
        }
    //if they are not all true then the only way for this if statement to be true
    //is if only one of the lights is on
    else if (red ^ green ^ yellow){
        //change the light
        //for each colour if its on/true
        //change it to off/false and turn the next light on
        if (red){
            red=false;
            green=true;
            }
        else if (green){
            green=false;
            yellow=true;
            }
         else if (yellow){
            yellow=false;
            red=true;
            }
        return true;
    }
    //some other unnacceptable compination of lights
    else{
        return false;
        }
    }


