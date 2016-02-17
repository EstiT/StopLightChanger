

#include <stdio.h>
#include <iostream>
#include "StopLight.cpp"

int main(){
    //turn lights on/off
    bool red=false;
    bool yellow=false;
    bool green=true;
    
    //print initial value
    std::cout<<red<<yellow<<green<<std::endl;
    //print values after changed once
    std::cout <<" *changing* "<<changeLight(red, yellow, green)<< std::endl;
    std::cout << red << yellow << green << std::endl;
    //print values after changed twice
    std::cout <<" *changing* "<<changeLight(red, yellow, green)<< std::endl;
    std::cout << red << yellow << green << std::endl;
    
}