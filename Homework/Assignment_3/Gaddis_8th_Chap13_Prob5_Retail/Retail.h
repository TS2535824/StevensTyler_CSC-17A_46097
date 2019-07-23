/* 
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  Class for store inventory
 */
#ifndef RETAIL_H
#define RETAIL_H
#include <string>

class Retail {
    private:
        std::string descrip;
        int unitsOnHand;
        float price;
    public:
        Retail(std::string d,int a,float p);      //constructor
        void setDescrip(std::string);
        void setUnits(int);
        void setPrice(float);

        
        
        
    //In-line member function
    std::string getDescrip() const{
        return descrip;
    }
    int getUnits() const{
        return unitsOnHand;
    }
    float getPrice() const{
        return price;
    }
    

};

#endif /* RETAIL_H */

