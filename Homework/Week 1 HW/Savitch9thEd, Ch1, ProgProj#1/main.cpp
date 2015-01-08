/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose:To show the sum of two integers and their product
 * Created on January 8, 2015, 11:17 AM
 */

#include <iostream>

using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins here


int main(int argc, char** argv) {
//Declare variables
  short int1, int2, sum, product;
  
  //Prompt user for input
  cout<<"This program adds and multiplies two different integers,"<<endl;
  cout<<"and shows both their sum and product! "<<endl;
  
  //Request user input for two different integers
  
  cout<<"Please input two integers."<<endl;
  cin>>int1;
  cin>>int2;
  
  //Calculate the sum and product
  product=int1*int2;
  sum=int1+int2;
  
  //Output the result to user
  cout<<"The product of the two integers you selected were "<<product<<endl;
  cout<<"The sum of the two integers you selected were "<<sum<<endl;
  
  //exit stage right
  
    
 
   
    
    
    return 0;
}

