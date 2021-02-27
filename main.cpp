/*
main.cpp This program creates Country class objects, sorts objects by country population in ascending order in a vector by passing those objects in a function and prints the list in formatted way in console.


Author: Elena Mudrakova
Module: 1
Project: Homework 1

Algorithm:
Before main()
1. #include "Country.h"
    #include <iostream>
    #include <iomanip> //for using formatting
    #include <string>
    #include <vector>
    using namespace std;
2. Put functions prototypes. 

In main()
1. Declare vector<Country> countries.
2. Create Country class objects.
3. Call inserting() for every object. 
4. Print the vector in a formatted way.

After main()
1. Declare inserting(vector &countries, Country c)
    1.int position = -1;
    2.int insertingIndex;
    3.while(position)
    In while loop:
        1.if vector.empty() then add object to vector -> position =1
        insertingIndex = 0
        return vector
        2.create for loop
        In for loop:
            1. if vector[i].getArea() > country then insert country before vector[i] using iterator
            position = 1
            return vector
        After for loop:
        3. if country.getArea() we want to insert is the biggest value, then push_back(country)
        position =1
        return vector
    After while loop:
    4.return vector


*/
#include "Country.h"
#include <iostream>
#include <iomanip> //for using formatting
#include <string>
#include <vector>
using namespace std;
//Function prototype
vector<Country> inserting(vector<Country> &vec, Country c);

int main() {
  //Create objects
  Country argentina("Argentina", 45258, 1073234);
  Country bolivia("Bolivia", 11696, 424052);
  Country brazil("Brazil", 212845, 3287086);
  Country chile("Chile", 19206, 291855);
  Country columbia("Columbia", 51115, 440715);
  Country ecuador("Ecuador", 17705, 106851);
  Country falklandIslands("Falkland Islands", 3, 4700);
  Country frenchGuiana("French Guiana", 290, 32253);
  Country guyana("Guyana", 787, 82978);
  Country paraguay("Paraguay", 7145, 157056);
  Country peru("Peru", 33108, 496093);
  Country suriname("Suriname", 586, 63252);
  Country uruguay("Uruguay", 3475, 68037);
  Country venezuela("Venezuela", 28102, 353748);

  vector<Country> countries = {};
  
  //inserting(countries,brazil);
  inserting(countries,argentina);
  inserting(countries,bolivia);
  inserting(countries,brazil);
  inserting(countries,chile);
  inserting(countries,columbia);
  inserting(countries,ecuador);
  inserting(countries,falklandIslands);
  inserting(countries,frenchGuiana);
  inserting(countries,guyana);
  inserting(countries,paraguay);
  inserting(countries,peru);
  inserting(countries,suriname);
  inserting(countries,uruguay);
  inserting(countries,venezuela);
  
  //Print vector of objects
  cout << "Country" << setw(25) << "Population" << setw(15) << "Area" << endl;
  cout << "_________________________________________________" << endl;
  
  for(int i = 0; i<countries.size(); i++){
    
    std::cout << countries[i] << '\n';
  }
}

//Function declaration
vector<Country> inserting(vector<Country> &vec, Country c){
  int position = -1;
  int insertingIndex;
  while(position){
    //If vector is empty then add objects to vector
    if(vec.empty()){
        vec.push_back(c);
        insertingIndex = 0;
        position = 1;
        return vec;
    }
    //If vector isn't empty then iterate through vector and find needed position, assuming that iserting object.getArea() isn't the biggest value
    for(int i = 0; i<vec.size(); i++){
        if(vec[i].getArea() > c.getArea()){
        auto insertingIndex = vec.begin() + i;
        auto newIt = vec.insert(insertingIndex, c);
        position = 1;
        return vec;
      }
      
      
    }
    //If inserting object.getArea() is the biggest value
    vec.push_back(c);
    position = 1;
    return vec;
  }
  
  
  return vec;
}

