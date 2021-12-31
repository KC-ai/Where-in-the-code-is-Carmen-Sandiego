// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3
 
 
#include <iostream>
#include <string>
using namespace std;
class Hacker{
    private:
        int challengeLevel;
        string hackerName;
       
       // int numHackers;
 
    public:
        Hacker();
        Hacker(int cLevel, string hName);
 
        void setChallengeLevel(int challLev);
        int getChallengeLevel();
 
        void setHackerName(string hackName);
        string getHackerName();
       
 
 
};
 
 

