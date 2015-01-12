/* 
 * File:   main.cpp
 * Author: rcc
 *Purpose: Use cmath function, cos, sin, tan
 * Created on January 12, 2015, 10:55 AM
 */

//system libraries
#include <cstdlib>//random rand(), srand()
#include <iostream>//keyboard monitor i/o
#include <fstream>//file i/o
#include<cmath>//math functions
#include<ctime>//time functions
#include<iomanip>//format library

using namespace std;

//user libraries

//global constants
const float PIDIV4=atan(1);//pi/4=arct(1)
const float CNVDGRD=PIDIV4/45;//pi/4/45 is the

//function prototypes

//execution begins here


int main(int argc, char** argv) {
    //Declare variables (set the random number seed)
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare a file object
    ofstream output;
    
    //Open the file
    output.open("SinCosTan.dat");
    
    //Declare the angle variable as an integer
    //In degrees, and the radian angle as a float
    int angDeg=rand()%361-180;//Angle(-180, +180)
    float angRad=angDeg*CNVDGRD;
    
    //Output the angle to the screen
    cout<<"Angle in degrees=> "<<angDeg<<endl; 
    cout<<"Angle in radians=> "<<angRad<<endl;
    
    //Output the angle to the .dat
    output<<"Angle in degrees=> "<<angDeg<<endl; 
    output<<"Angle in radians=> "<<angRad<<endl;

    //Output the sin, cos, tan to the screen
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angDeg<<") = "<< setw(8) <<sin(angRad)<<endl;
    cout<<"cos("<<angDeg<<") = "<< setw(8) <<cos(angRad)<<endl;
    cout<<"tan("<<angDeg<<") = "<< setw(8) <<tan(angRad)<<endl;
    
    //Output the sin, cos, tan to the .dat
    output<<fixed<<setprecision(4)<<showpoint;
    output<<"sin("<<angDeg<<") = "<< setw(8) <<sin(angRad)<<endl;
    output<<"cos("<<angDeg<<") = "<< setw(8) <<cos(angRad)<<endl;
    output<<"tan("<<angDeg<<") = "<< setw(8) <<tan(angRad)<<endl;
     
    //close the string
    output.close();
    
    return 0;
}



