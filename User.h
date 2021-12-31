// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3
 
 
#include <iostream>
#include <string>
using namespace std;
class User{
   private:
 
   //private data members for the player/ user, which is the name of the player (string), the frustration level (int),
   //the amount of dogecoin (int), the computer's maintenance level (int), and the progress level (int)
       string playerName;
       int frustrationLevel;
       int dogecoin;
       int computerMaintenanceLevel;
       int progressLevel;
       int numViruses;
 
   public:
 
       //constructors
       User();
       User(string nme, int frustration, int doge, int compLevel, int progLevel, int n);
 
 
       //getters
       string getName();
       int getfrustrationLevel();
       int getDogecoin();
       int getComputerLevel();
       int getProgressLevel();
 
       //setters
       void setName(string name);
       void setfrustrationLevel(int frustration);
       void setDogecoin(int doge);
       void setComputerLevel(int compLevel);
       void setProgressLevel(int progLevel);
       int getNumViruses();
       void setNumViruses(int n);
 
     
};
 
 

