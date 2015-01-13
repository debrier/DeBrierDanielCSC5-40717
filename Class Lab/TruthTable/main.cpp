/* 
 * File:   main.cpp
 * Author: Daniel DeBrier
 *
 * Created on January 13, 2015, 9:15 AM
 */
//system libraries
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

    //Declare 2 boolean variables
    bool X,Y;
    
    //Output the heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    
    //Fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"    ";
    cout<<(!(X||Y)?'T':'F')<<"    ";
    cout<<(!X&&!Y?'T':'F')<<"    ";
    cout<<(!(X&&Y)?'T':'F')<<"    ";
    cout<<(!X||!Y ?'T':'F')<<"    ";
    
    //Fill in the second row
    X=false; Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"     ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"    ";
    cout<<(X^Y^X?'T':'F')<<"    ";
    cout<<(!(X||Y)?'T':'F')<<"    ";
    cout<<(!X&&!Y?'T':'F')<<"    ";
    cout<<(!(X&&Y)?'T':'F')<<"    ";
    cout<<(!X||!Y ?'T':'F')<<"    ";
    
    
    
    //exit stage right
    return 0;
}

