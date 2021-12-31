// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3
 
#include "Parts.h"
#include <iostream>
using namespace std;
 
Parts::Parts(){
    CPU =0;
    GPU =0;
    powerSupplyUnit =0;
    computerCase =0;
    internetCard = 0;
    keyboard =0;
    premadeComputer =0;
    VPN = 1;
    antiVirusSoftware = 0;
    internetProviderLevel =0;
 
}
 
Parts::Parts(int cpu1, int gpu1, int powerSupply, int case1, int card, int key,  int preMade, int antiVirus, int VP, int internetProvider){
   CPU =cpu1;
   GPU =gpu1;
   powerSupplyUnit =powerSupply;
   computerCase =case1;
   internetCard = card;
   keyboard =key;
   premadeComputer =preMade;
   antiVirusSoftware = antiVirus;
   VPN = VP;
   internetProviderLevel = internetProvider;
}
 
int Parts::getCPU(){
   return CPU;
}
void Parts::setCPU(int cpu1){
   CPU = cpu1;
}
 
int Parts::getGPU(){
   return GPU;
}
void Parts::setGPU(int gpu1){
   GPU = gpu1;
}
 
int Parts::getPowerSupplyUnit(){
   return powerSupplyUnit;
}
void Parts::setPowerSupplyUnit(int powerSupply){
   powerSupplyUnit = powerSupply;
}
 
int Parts::getComputerCase(){
   return computerCase;
}
void Parts::setComputerCase(int case1){
   computerCase = case1;
}
 
int Parts::getInternetCard(){
   return internetCard;
}
 
void Parts::setInternetCard(int card){
   internetCard = card;
}
 
int Parts::getKeyboard(){
   return keyboard;
}
void Parts::setKeyboard(int key){
   keyboard = key;
}
 
 
 
int Parts::getPreMadeComputer(){
   return premadeComputer;
}
void Parts::setPreMadeComputer(int preMade){
   premadeComputer = preMade;
}
 
int Parts::getAntiVirusSoftware(){
   return antiVirusSoftware;
}
void Parts::setAntiVirusSoftware(int antiVirus){
   antiVirusSoftware = antiVirus;
}
 
int Parts::getVPN(){
   return VPN;
}
void Parts::setVPN(int VP){
   VPN = VP;
}
 
int Parts::getInternetProviderLevel(){
   return internetProviderLevel;
}
void Parts::setInternetProviderLevel(int internetProvider){
   internetProviderLevel = internetProvider;
}
 
 

