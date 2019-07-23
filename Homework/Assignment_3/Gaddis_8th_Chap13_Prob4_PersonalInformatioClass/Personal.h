/* 
 * Author: Tyler Stevens
 * Created on July 18 2019
 * Purpose:  class that hold personal information from user
 */

#ifndef PERSONAL_H
#define PERSONAL_H
#include <cstring>
#include <string>


class Personal {
    private:
        unsigned int age;
        unsigned int number;
        std::string name;
        std::string address;
        
    public:
        void setName(std::string);
        void setAddress(std::string);
        void setAge(unsigned int);
        void setNumber(unsigned int);
        void display();
        
        
    //In-line member function
    unsigned int getAge() const{
        return age;
    }
    unsigned int getNumber() const{
        return number;
    }
    std::string getName() const{
        return name;
    }
    std::string getAddress() const{
        return address;
    }
    
};

#endif /* PERSONAL_H */

