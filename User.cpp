// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3
 
#include "User.h"
#include <iostream>
using namespace std;
 
User::User(){
   playerName = "";
   frustrationLevel = 0;
   dogecoin = 200;
   computerMaintenanceLevel = 100;
   progressLevel = 0;
   numViruses =0;
}
 
//sets all the user initial stat conditions, with all the amount of each attribute the user starts with
User::User(string nme, int frustration, int doge, int compLevel, int progLevel, int n){
   playerName = nme;
   frustrationLevel = frustration;
   dogecoin = doge;
   computerMaintenanceLevel = compLevel;
   progressLevel = progLevel;
   numViruses = n;
 
}
 
 
 
string User::getName(){
   return playerName;
}
 
void User::setName(string nme){
   playerName = nme;
}
 
int User::getfrustrationLevel(){
   return frustrationLevel;
}
void User::setfrustrationLevel(int frustration){
   frustrationLevel = frustration;
}
 
int User::getDogecoin(){
   return dogecoin;
}
 
void User::setDogecoin(int doge){
   dogecoin = doge;
}
 
int User::getComputerLevel(){
   return computerMaintenanceLevel;
}
void User::setComputerLevel(int compLevel){
   computerMaintenanceLevel = compLevel;
}
 
int User::getProgressLevel(){
   return progressLevel;
}
 
void User::setProgressLevel(int progLevel){
   progressLevel = progLevel;
}
int User::getNumViruses(){
    return numViruses;
}
void User::setNumViruses(int n){
    numViruses = n;
}
 


