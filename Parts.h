// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3
 
 
#include <iostream>
#include <string>
using namespace std;
class Parts{
   private:
       int CPU;
       int GPU;
       int powerSupplyUnit;
       int computerCase;
       int internetCard;
       int keyboard;
       
       int premadeComputer;
       int antiVirusSoftware;
       int VPN;
       int internetProviderLevel;
     
 
   public:
       Parts();
       Parts(int cpu1, int gpu1, int powerSupply, int case1, int card, int key,  int preMade, int antiVirus, int VP, int internetProvider);
 
       int getCPU();
       void setCPU(int cpu1);
 
       int getGPU();
       void setGPU(int gpu1);
     
       int getPowerSupplyUnit();
       void setPowerSupplyUnit(int powerSupply);
 
       int getComputerCase();
       void setComputerCase(int case1);
 
       int getInternetCard();
       void setInternetCard(int card);
 
       int getKeyboard();
       void setKeyboard(int key);
 
   
 
       int getPreMadeComputer();
       void setPreMadeComputer(int preMade);
 
       int getAntiVirusSoftware();
       void setAntiVirusSoftware(int antiVirus);
 
       int getVPN();
       void setVPN(int VP);
 
       int getInternetProviderLevel();
       void setInternetProviderLevel(int internetProvider);
 
 
};
 
 

