// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3

#include "Hacker.h"
 
using namespace std;
 
Hacker::Hacker()
{
    challengeLevel = 0;
    hackerName = "";
   
}
 
Hacker::Hacker(int cLevel, string hName){
    challengeLevel = cLevel;
    hackerName = hName;
   
}
 
void Hacker::setChallengeLevel(int challLev){
    challengeLevel = challLev;
}
 
int Hacker::getChallengeLevel(){
    return challengeLevel;
}
 
void Hacker::setHackerName(string hackName){
    hackerName = hackName;
}
 
string Hacker::getHackerName(){
    return hackerName;
}
 
