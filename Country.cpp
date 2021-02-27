/*
Country.cpp Implementation of Country class.

Author: Elena Mudrakova
Module: 1
Project: Homework 1

Algorithm: 
1. Declare default constructor.
2. Declare tree arguments constructor.
3. Declare getters and setters.
4. Overload ostream& operator<< for printitng the object.

*/
#include "Country.h"
#include <iostream>
#include <iomanip> //for using formatting
#include <string>
using namespace std;

Country::Country(){
  name = " ";
  population = 0;
  area = 0;
};

Country::Country(string name, double population, double area){
  this->name = name;
  this->population = population;
  this->area = area;
}


void Country::setName(string name){
  this->name = name;
}
string Country::getName(){
  return name;
}
void Country::setPopulation(double population){
  this->population = population;
}
double Country::getPopulation(){
  return population;
}
void Country::setArea(double area){
  this->area = area;
}
double Country::getArea(){
  return area;
}

std::ostream& operator<< (std::ostream &out, const Country &country)
{
    out << setw(20) << left << country.name << setw(13) << right << (int)country.population << setw(15) << fixed << right << (int) country.area << endl;
    
 
    return out; 
}