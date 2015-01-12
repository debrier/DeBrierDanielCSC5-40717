/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 12, 2015, 11:38 AM
 */

//system library
#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;

//User libraries

//Global constants

//function prototypes

//execution begins here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables
    float intRate=0.0319f/12;//Capital One
    float MSRPplus=4e4f;//Loan amount for buick avenair
    char nPayments=60;//# of monthly payment
    
    //Calculate monthly payments
    float temp=pow((1+intRate/12), nPayments);
   
    float mPay=intRate*temp*MSRPplus/(temp-1);
    
    //Output the inputs
    cout<<"interest per year ="<<intRate*100<<endl;
    cout<<"number of payments =" <<static_cast<int>(nPayments)<<endl;
    
    //Output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Prof.Lehr's car will cost $"<<mPay<<endl;
    
    return 0;
}

