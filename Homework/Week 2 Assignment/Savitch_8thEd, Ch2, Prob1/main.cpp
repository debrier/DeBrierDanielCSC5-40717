/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose Metric conversion
 * Created on January 13, 2015, 10:51 AM
 */

//system libraries
#include <iostream>

using namespace std;

//user libraries

//global constants
const float CMTNONS=3.527392e4f;//Conversion from Metric Tons to Ounces

//function prototypes

//execution begins here

/*
 * 
 */
int main(int argc, char** argv) {
//Declare variables
    float wtPackOz;//Weight of cereal contents in ounces
    float wtPackTn;//Weight of cereal contents in tons
    float nPackTn;//Number of cereal boxes in a metric ton
    
    //Prompt user for cereal weights
        cout<<"Input the number of ounces on the cereal box"<<endl;
        cout<<"to convert to metric tons."<<endl;
        cout<<"Format is float ddd.ddd (ounces)"<<endl;
        cin>>wtPackOz;

        //Calculate the results
        wtPackTn=wtPackOz/CMTNONS;

        nPackTn=1/wtPackTn;

        //Output the results
        cout<<"Weight of cereal box is "<<wtPackTn<<"metric tons"<<endl;
        cout<<"Number of cereal boxes in a metric ton =>"<<nPackTn<<endl;

        //Ask if user would like to repeat calculation

        cout<<"Would you like to repeat the calculation?"<<endl;
        cout<<"Or make a new calculation?"<<endl;
        cout<<"Type Y for yes, N for no."<<endl;
        char answer;
        cin>>answer;
    
    if(answer=='Y'||answer=='y'){
        
        cout<<"Input the number of ounces on the cereal box"<<endl;
        cout<<"to convert to metric tons."<<endl;
        cout<<"Format is float ddd.ddd (ounces)"<<endl;
        cin>>wtPackOz;

        //Calculate the results
        wtPackTn=wtPackOz/CMTNONS;

        nPackTn=1/wtPackTn;

        //Output the results
        cout<<"Weight of cereal box is "<<wtPackTn<<"metric tons"<<endl;
        cout<<"Number of cereal boxes in a metric ton =>"<<nPackTn<<endl;}

    //exit stage right
    
    return 0;
}

