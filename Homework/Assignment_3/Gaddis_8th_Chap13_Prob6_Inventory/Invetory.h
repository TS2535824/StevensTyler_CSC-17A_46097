/* 
 * File:   Invetory.h
 * Author: Tyler Stevens
 * Created on July 18, 2019, 6:53 PM
// * Purpose
 */

#ifndef INVETORY_H
#define INVETORY_H

class Invetory {
    private:
        int itemNumber;
        int quantity;
        float cost;
        float totalCost;
        
    public:
        Invetory();
        Invetory(int i,int q,float c);
        void setItemNumber(int);
        void setQuantity(int);
        void setCost(float);
        void setTotalCost();
        
        //In-line member functions
        int getItemNumber()const{
            return itemNumber;
        }
        int getQuantity()const{
            return quantity;
        }
        float getCost() const{
            return cost;
        }
        float getTotalCost() const{
            return totalCost;
        }

};

#endif /* INVETORY_H */

