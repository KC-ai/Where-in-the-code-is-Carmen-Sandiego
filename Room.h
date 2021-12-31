// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3
 
#include "Parts.cpp"
#include <iostream>
#include <string>
using namespace std;
 
class Room{
    private:    
        int virus;
        int antivirusSoftware;  
        string Parr[6];
        int carmenProgress;
 
    public:
        Room();
        Room(int vir, int av, int arr[], int p);
       
        int getVirus();
        void setvirus(int vir);
 
        int getAntivirusSoftware();
        void setAntivirusSoftware(int av);
 
        int getCarmenProgress();
        void setCarmenProgress(int p);
       
 
       
};
 

