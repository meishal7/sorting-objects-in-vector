/*
Country.h Header file of Country class. Countains members: string name, double population, double area and overloaded ostream operator<< 

Author: Elena Mudrakova
Module: 1
Project: Homework 1
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Country{
  private:
    string name;
    double population;
    double area;

  public:
    Country();
    Country(string name, double population, double area);
    

    void setName(string name);
    string getName();
    void setPopulation(double population);
    double getPopulation();
    void setArea(double area);
    double getArea();

    friend std::ostream& operator<< (std::ostream &out, const Country &country);

    
};



