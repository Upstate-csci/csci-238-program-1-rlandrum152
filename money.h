/********
 Author:
 Program: Money class - program assignment #1
 Due Date:
 Purpose:
 ********/
#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <locale>

using namespace std;
class Money
{
private:
    double total, amount1, price;
    int hundreds, tens, fives, ones, quarters, dimes, nickels, cents, hundreds100, tens10, fives5, ones1, quarters25, dimes11, nickels05, cents01  ;
public:
    string toString();
    string toCurrency(double amount);
    string processChange();
    string processFloat();
    string processCheck();
    string processChangeFloat();
    string processChangeChange();
};
#endif
