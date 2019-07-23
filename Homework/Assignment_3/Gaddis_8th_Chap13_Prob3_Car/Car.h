/* 
 * File:   Car.h
 * Author: Tyler Stevens
 * Created on July 18, 2019, 7:58 PM
 * Purpose Create a car class
 */

#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
    private:
        int yearModel;
        int speed;
        std::string make;

    public:
        Car(int, std::string);
        void accelerate();
        void brake();
        
        
    //In-line member functions
    int getYearModel()const{
        return yearModel;
    }
    int getSpeed()const{
        return speed;
    }
    std::string getMake() const{
        return make;
    }
   
};

#endif /* CAR_H */

