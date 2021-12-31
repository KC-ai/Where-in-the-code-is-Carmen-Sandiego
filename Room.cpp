// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3
 
#include "Room.h"
 
#include <iostream>
using namespace std;
 
Room::Room(){
    virus =0;
    antivirusSoftware =0;
    carmenProgress =0;
    // Parr = {"CPU", "GPU", "Power Supply Unit" , "Computer Case" , "Internet Card" , "Keyboard and Mouse"};
 
   
}
Room::Room(int vir, int av, int arr[], int p){
    virus = vir;
    antivirusSoftware =av;
    carmenProgress =p;
}
int Room::getVirus(){
    return virus;
}
 
void Room::setvirus(int vir){
    virus = vir;
}
 
int Room::getAntivirusSoftware(){
    return antivirusSoftware;
}
 
void Room::setAntivirusSoftware(int av){
    antivirusSoftware = av;
}
 
int Room::getCarmenProgress(){
    return carmenProgress;
}
void Room::setCarmenProgress(int p){
    carmenProgress = p;
}
 
 
 
 

