#pragma once
#include "Employee.h"
#include <cassert>

class Date : Employee {
    private:
        int d, m, y;
    public:
      /*  Date();
        Date(int day, int month, int year = 2022);
        Date(const Date&);
        ~Date(); */
    
        void setDate();   
        void IsDateCorrect();
        int getDate();  
};
