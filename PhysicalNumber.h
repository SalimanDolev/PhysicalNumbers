/**
 * this class represents Units for 3 physical numbers
 * weight : g kg ton
 * speed : sec min hour
 * length : cm m km
 * */
#pragma once
#include "Unit.h"
#include <iostream>
using namespace std;
namespace ariel
{
    class PhysicalNumber
    {
    public:
        double value;
        Unit unit;
        PhysicalNumber(double num, Unit type):value(num),unit(type)
        {
           value=num;
            unit=type;
        }
        //boolean
        bool operator==(const PhysicalNumber& rhs);
        bool operator!=(const PhysicalNumber& rhs);
        bool operator<(const PhysicalNumber& rhs);
        bool operator>(const PhysicalNumber& rhs);
        bool operator<=(const PhysicalNumber& rhs);
        bool operator>=(const PhysicalNumber& rhs);
        //+=,-=,+,-
        PhysicalNumber &operator+=(const PhysicalNumber& rhs);
        PhysicalNumber &operator-=(PhysicalNumber& rhs);
        PhysicalNumber &operator+(const PhysicalNumber& rhs);
        PhysicalNumber &operator-(const PhysicalNumber& rhs);
        //onary 
        PhysicalNumber& operator-();
        PhysicalNumber& operator+();
        //++,--
        PhysicalNumber& operator++();
        PhysicalNumber& operator--();
        //stream
        friend std::istream& operator>>(std::istream& in, const PhysicalNumber& a);
        friend ostream& operator<<(ostream& out, const PhysicalNumber& a);
       
    };
}