/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: To calculate the tax and tip on a restaurant bill.
 * Created on January 9, 2015, 8:33 PM
 */

#include <iostream>

using namespace std;

//user libraries

//global constants


//function prototypes

//execution begins here

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
float mealcost=44.50;//cost of the meal
float taxperc=0.0675;//the tax percentage
float tip=0.15;//the percent tipped after tax
float MCpostTax;//the amount of tax money
float tipamount;//the amount that is tipped
float total;//the absolute total. Cost, tax, and tip.

//Describe program to user
cout<<"This program calculates the tax, tip, and total"<<endl;
cout<<"of a $44.50 restaurant bill."<<endl;

//Calculate the amount of tax money
MCpostTax=mealcost*taxperc;

//Calculate the amount of tip, post taxation
tipamount=(MCpostTax+mealcost)*tip;

//Calculate the total bill
total=mealcost+MCpostTax+tipamount;

//Output those results to user
cout<<"The cost of the meal was "<<mealcost<<" dollars."<<endl;

cout<<"The tax on the meal was "<<MCpostTax<<" dollars."<<endl;

cout<<"The tip on the meal was "<<tipamount<<" dollars."<<endl;

cout<<"The bill total was "<<total<<" dollars"<<endl;

//exit stage right
    
    return 0;
}

