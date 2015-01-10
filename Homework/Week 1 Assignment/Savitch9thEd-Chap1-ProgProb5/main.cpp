/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *Purpose: To make a big C
 * Created on January 8, 2015, 8:50 AM
 */

#include <iostream>

using namespace std;
//user libraries
//global constants
//function prototypes
//execution begins here

int main(int argc, char** argv) {
    //Declare variables
    char c;//character
    
    //Prompt user for a character
    cout<<"this program will output a large block letter C"<<endl;
    cout<<"with a character that you input"<<endl;
    cout<<"input a character"<<endl;
    
    cin>>c;
    cout<<endl;
    
    //Output a large letter C with a character the user enters
    cout<<"  "<< c << c << c <<endl;
    cout<<" "<< c <<"  "<< c <<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<" "<< c <<"  "<< c <<endl;
    cout<<"  "<< c << c << c <<endl;
    
    
    return 0;
}

