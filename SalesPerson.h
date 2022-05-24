//
// Created by studentloaner on 4/26/2022.
//
#include<iostream>
#include <string>
using namespace std;

#ifndef SALESPERSONCLASS_SALESPERSON_H
#define SALESPERSONCLASS_SALESPERSON_H

#endif //SALESPERSONCLASS_SALESPERSON_H
class SalesPerson{
public:
    static const int monthsPerYear=12;
    SalesPerson();
    void getSalesFromUser();
    void setSales(int x,double y);
    void printAnnualSales();

private:
    double totalAnnualSales();
    //array sales
    double sales[monthsPerYear];
};
