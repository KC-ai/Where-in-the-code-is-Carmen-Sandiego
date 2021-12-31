// CSCI 1300 Fall 2021
// Author: Kashyap Challapalli + Arnav Jain 
// Recitation: 213 - Jerry Gammie
// Project 3
 
#include "Map.cpp"
#include "User.cpp"
#include "Room.cpp"
#include <fstream>
#include "Hacker.cpp"
 
using namespace std;
 
 
 
 
int split(string stringSplit, char seperator, string arr[], int size)
{
 
    string temp = "";                  // create blank string
    int length = stringSplit.length(); // length of string variable
    int numSplit = 0;                  // number of pieces of the string was split into variable set to 0
    for (int i = 0; i <= length - 1; i++)
    { // loop through all the characters in the string
        if (stringSplit[i] != seperator)
        { // check if any are not equal to the seperator and adds characters to the temporary string if not equal
            temp += stringSplit[i];
            arr[numSplit] = temp;
        }
        else
        { // if the character is the seperator than it sets the temp to a position in the array, resets the temp string and adds 1 to numSplit so that the next time its stored in the next index of array
            arr[numSplit] = temp;
            temp = "";
            numSplit++;
            //cout << numSplit << endl;
        }
    }
    if (numSplit >= size)
    { // checks if number of splits is greater than the size of the array
        return -1;
    }
    if (stringSplit.length() == 0)
    { // checks if the size of the array is 0
        return 0;
    }
    return numSplit + 1;
}
 
void bestBuy(User &player, Parts &playerParts)
{
   //create character for user input of whether they want to purchase computer parts or not
   char responseCP;
 
   //create int variables for user input for how many of each part they wanna purchase
   int responseCPU;
   int responseGPU;
   int responsePSU;
   int responseCase;
   int responseCard;
   int responseKey;
   char responsePreMade;
   int responseVirus;
   int responseVPN;
   int responseIL;
   //variables for the number of parts Purchased and the total cost
   int numPurchase = 0;
   int totalCost = 0;
   //the temp variable for the number of each part through getters
   int tempDogeCoin = player.getDogecoin();
   int tempCPU = playerParts.getCPU();
   int tempGPU = playerParts.getGPU();
   int tempPower = playerParts.getPowerSupplyUnit();
   int tempCase = playerParts.getComputerCase();
   int tempCard = playerParts.getInternetCard();
   int tempKey = playerParts.getKeyboard();
   int tempPreMade = playerParts.getPreMadeComputer();
   int tempAntivirus = playerParts.getAntiVirusSoftware();
   int tempVPN = playerParts.getVPN();
   int tempInternet = playerParts.getInternetProviderLevel();
   //ask user if they want to purchase computer parts
   cout << "Do you wish to purchase Computer Parts (Y/N)" << endl;
   cin >> responseCP;
 
   //If user says Y (yes) then ask if they would like to purchase each part
   if (responseCP == 'Y')
   {
       //get response for the CPU of how many the user wants to purchase
       cout << "A CPU costs 10 Dogecoins. How many CPU's would you like to purchase? " << endl;
       cin >> responseCPU;
 
       //if the user has less than or equal to 3 CPUs and ask for more than 0 CPUs, add 10 * the number of CPUs they would like to purchase
       //to the total cost, and add the number of CPUs they want to purchase to the tempCPU variable and set the amount of CPUs the player has
       //to the tempCPU, and output the about of CPUs the player has
       if (playerParts.getCPU() <= 3 && responseCPU > 0)
       {
           totalCost += 10 * responseCPU;
           tempCPU += responseCPU;
           playerParts.setCPU(tempCPU);
           cout << playerParts.getCPU() << endl;
       }
 
       //Get response for the GPU of how many the user wants to purchase
       cout << " A GPU costs 20 Dogecoins. How many GPU's would you like to purchase?" << endl;
       cin >> responseGPU;
 
       //if the user has less than or equal to 3 GPUs and ask for more than 0 GPUs, add 20 * the number of GPUs they would like to purchase
       //to the total cost, and add the number of GPUs they want to purchase to the tempGPU variable and set the amount of GPUs the player has
       //to the tempGPU, and output the about of GPUs the player has
       if (playerParts.getGPU() <= 3 && responseGPU > 0)
       {
           totalCost += 20 * responseGPU;
           tempGPU += responseGPU;
           playerParts.setGPU(tempGPU);
       }
 
       //Get response for the Power Supply Unit of how many the user wants to purchase
       cout << " A Power Supply Unit costs 5 Dogecoins. How many PSU's would you like to purchase?" << endl;
       cin >> responsePSU;
 
       //if the user has less than or equal to 3 PSUs and ask for more than 0 PSUs, add 5 * the number of PSUs they would like to purchase
       //to the total cost, and add the number of PSUs they want to purchase to the tempPSU variable and set the amount of PSUs the player has
       //to the tempPSU, and output the about of PSUs the player has
       if (playerParts.getPowerSupplyUnit() <= 3 && responsePSU > 0)
       {
           totalCost += 5 * responsePSU;
           tempPower += responsePSU;
           playerParts.setPowerSupplyUnit(tempPower);
       }
 
       //Get response for the Computer Case of how many the User wants to purchase
       cout << "A Computer Case costs 15 Dogecoins. How many computer cases would you like to purchase?" << endl;
       cin >> responseCase;
 
 
       if (playerParts.getComputerCase() <= 3 && responseCase > 0)//enter conditional if user has less than 3 computer cases
       {
 
           totalCost += 15 * responseCase; //multiply 15 times the user input for the total amount purchased
           tempCase += responseCase; //add the number the user bought to the tempCase
           playerParts.setComputerCase(tempCase); //set the computer case to the temp case
       }
       cout << "An Internet Card costs 5 Dogecoins. How many Internet cards would you like to purchase?" << endl; //Ask user
       cin >> responseCard;
       if (playerParts.getInternetCard() <= 3 && responseCard > 0)//enter conditional if user has less than 3 computer cases
       {
           totalCost += 5 * responseCard; //multiply 5 times the user input for the total amount purchased
           tempCard += responseCard; //add the number the user bought to the tempCard
           playerParts.setInternetCard(tempCard); //set the internet card to the tempCard
       }
       cout << "A Keyboard and mouse costs 10 Dogecoins. How many would you like to purchase?" << endl; //Ask user
       cin >> responseKey;
       if (playerParts.getKeyboard() <= 3 && responseKey > 0)//greater than 3 parts
       {
           totalCost += 10 * responseKey; //10 times each part for total amount
           tempKey += responseKey; //add to tempkey
           playerParts.setKeyboard(tempKey); //set tempkey
       }
       cout << "A Premade Copmuter costs 100 Dogecoins. Would you like to a purchase A Premade Computer? (Y/N)" << endl; //user input
       cin >> responsePreMade;
       if (playerParts.getPreMadeComputer() <= 1 && responsePreMade == 'Y') //greater than 1 comp
       {
           totalCost += 100; //add 100
           tempPreMade++; //increment
           playerParts.setPreMadeComputer(tempPreMade);
       }
   }
   //antivirus software
   cout << "Total Cost: " << totalCost << endl;
   cout << "One USB stick of antivirus software costs 10 Dogecoins and will give you a one-time use to get rid of any viruses on your computer." << endl;
   cout << "How many antivirus USB sticks would you like to purchase?" << endl;
   cin >> responseVirus;
   totalCost += responseVirus * 10;
   tempAntivirus += responseVirus;
   cout << "Total Cost: " << totalCost << endl;
   playerParts.setAntiVirusSoftware(responseVirus);
   //VPNs
   cout << "A VPN costs 20 Dogecoins each. VPNs reduce your chances of getting hacked by preventing hackers from tracking down your main computer. The increase in security maxes out at 2 VPNs." << endl;
   cout << "How many VPNs would you like to purchase?" << endl;
   cin >> responseVPN;
   if (playerParts.getVPN() <= 2 && responseVPN > 0)
   {
       totalCost += responseVPN * 20;
       tempVPN += responseVPN;
       playerParts.setVPN(tempVPN);
   }
   cout << "Total Cost: " << totalCost << endl;
   //Internet Provider
   cout << "Internet provider level 2 costs 10 Dogecoins" << endl;
   cout << "Internet provider level 3 costs 25 Dogecoins" << endl;
   cout << "Internet provider level 4 costs 40 Dogecoins" << endl;
   cout << "Internet provider level 5 costs 50 Dogecoins" << endl;
   cout << "What internet provider leve would you like to buy from 2-5?" << endl;
   cin >> responseIL;
   if (responseIL == 2)
   {
       totalCost += 10;
   }
   if (responseIL == 3)
   {
       totalCost += 25;
   }
   if (responseIL == 4)
   {
       totalCost += 40;
   }
   if (responseIL == 5)
   {
       totalCost += 50;
   }
   playerParts.setInternetProviderLevel(responseIL);
   cout << "Total Cost: " << totalCost << endl;
   //note 1 and # of copmuter parts
   tempDogeCoin = player.getDogecoin() - totalCost;
 
   player.setDogecoin(tempDogeCoin);
 
}
 
 
bool fightHacker(int roomL, Parts &playerParts, User &player1, Room &room)
{
    //open files and create variables
    ifstream fin;
    fin.open("hackers.txt");
    string s;
    string currLine[2];
    string hackerNames[20];
    int hackerLevel[20];
    int arrPos = 0;
    bool outcome = false;
    while (getline(fin, s)) // while loop to go through the hackers.txt file
    {
        split(s, ',', currLine, 2); // split each line at the comma
        hackerNames[arrPos] = currLine[0]; // store the name
        hackerLevel[arrPos] = stoi(currLine[1]); // store the level
        arrPos++; // increment
    }
 
    int temp = 0;
    if (roomL == 1) // check for current room number to see which set of hacker usernames to display
    {
        temp = rand() % 4;
    }
    else if (roomL == 2)
    {
        temp = rand() % 4 + 4;
    }
    else if (roomL == 3)
    {
        temp = rand() % 4 + 8;
    }
    else if (roomL == 4)
    {
        temp = rand() % 4 + 12;
    }
    else if (roomL == 5)
    {
        temp = rand() % 4 + 16;
    }
 
    cout << "You just ran into " << hackerNames[temp] << "! Think you can beat this hacker’s skills?" << endl;
 
    int r1 = rand() % 6 + 1;
    int r2 = rand() % 6 + 1;
 
    //come back and fix roomL and getInternetProviderLevel()
    double score = (r1 * playerParts.getInternetProviderLevel()) - ((r2 * roomL) / playerParts.getVPN()); // update score
 
    if (score > 0) // condition for win
    {
        outcome = true;
        player1.setDogecoin(player1.getDogecoin() + 50); // update dogecoin
        cout << "You Win" << endl;
    }
    else // if lose
    {
        outcome = false;
        player1.setComputerLevel(player1.getComputerLevel() - 20); // update
        int vchance = rand() % 10 + 1; // 10 percent chance
        if (vchance == 7)
        {
            room.setvirus(1);
        }
        cout << "You Lose" << endl;
        //virus stuff
    }
 
    return outcome;
}
int q=0;
int question =1;
void puzzle(Parts &playerParts)
{
    //open file and create variables
    ifstream fin;
    fin.open("puzzles.txt");
    string line = "";
    int count = 0;
    int dash[6] = {0, 0, 0, 0, 0, 101};
    int index = 1;
    int c = 0;
    while (getline(fin, line)) // go through the lines
    {
        c++;
        if (line.length() > 0 && line[0] == '-') // check for the --- and store the line number where it happens
        {
            dash[index] = c;
            index++;
        }
    }
 
    int k = 0;
    fin.clear();
    fin.seekg(0);
    string q1;
    string s1 = "";
 
    string answers[5] = {"21", "13", "B", "A", "C"}; // array of the answers
 
 
   
    int a = dash[question - 1];
    int b = dash[question];
    string answer = "";
   
 
    while (getline(fin, line)) // loop again to print the lines from start to end of each question
    {
        if (k >= a && k < b)
        {
 
            cout << line << endl;
        }
        k++;
       
       
    }
    question ++;
    cout << endl<< "Enter your answer:" << endl;
    cin >> answer;
    if(answers[q] == answer){ // check if their ansewr is correct
        cout << "That is correct!" << endl;
        string par[6] = {"CPU", "GPU", "Power Supply Unit", "Computer Case", "Internet Card", "Keyboard and a Mouse"}; // array for name of parts
                int choice = rand() % 6; //choose a random computer part
                cout << "Here is a " << par[choice] << "." << endl;
                if(choice == 0) { // give user the a random item  
                    playerParts.setCPU(playerParts.getCPU()+1);
                } else if(choice == 1) {
                    playerParts.setGPU(playerParts.getGPU()+1);
                } else if(choice == 2) {
                    playerParts.setPowerSupplyUnit(playerParts.getPowerSupplyUnit()+1);
                } else if(choice == 3) {
                    playerParts.setComputerCase(playerParts.getComputerCase()+1);
                } else if(choice == 4) {
                    playerParts.setInternetCard(playerParts.getInternetCard()+1);
                } else if(choice == 5) {
                    playerParts.setKeyboard(playerParts.getKeyboard()+1);
                }
 
    }
    q++;
   
   
}
 
void sorting(int arr[], int n){
    //int arr[10]; //create array of size n
    int x = arr[0];
    bool check = true;
    for(int i=0; i<n; i++){ // first loop from 0 to size
        for(int j =i+1; j<n;j++){ // second loop from i+1 to size
            if(arr[j] < arr[i]){ // checkf if value is bigger
                int temp = arr[i]; // create temp array
                arr[i] = arr[j]; // update
                arr[j] = temp; // replace temp
            }          
        }
    }  
}
 
 
void NPC(Parts &playerParts, int question){
   char input;
   cout<<"Do you want to complete the puzzle for a prize?: (y/n)"<<endl;
   cin>>input;
   if (input == 'y'){  // check if they want to do the puzzle
       puzzle(playerParts); // call the puzzle function
   }
   else{
       int chance = rand() % 3 + 1; // random number for the 33% chance
       if (chance == 1){     // if NPC is enemy
            string par[6] = {"CPU", "GPU", "Power Supply Unit", "Computer Case", "Internet Card", "Keyboard and a Mouse"};
                int choice = rand() % 6; //choose a random computer part
                cout << "You Lost a " << par[choice] << "." << endl;
                if(choice == 0) { //give user the correct item based on random input
                    playerParts.setCPU(playerParts.getCPU()-1);
                } else if(choice == 1) {
                    playerParts.setGPU(playerParts.getGPU()-1);
                } else if(choice == 2) {
                    playerParts.setPowerSupplyUnit(playerParts.getPowerSupplyUnit()-1);
                } else if(choice == 3) {
                    playerParts.setComputerCase(playerParts.getComputerCase()-1);
                } else if(choice == 4) {
                    playerParts.setInternetCard(playerParts.getInternetCard()-1);
                } else if(choice == 5) {
                    playerParts.setKeyboard(playerParts.getKeyboard()-1);
                }
           
       }
       else if (chance == 2){ // if NPC is friendly
            string par[6] = {"CPU", "GPU", "Power Supply Unit", "Computer Case", "Internet Card", "Keyboard and a Mouse"};
            int choice = rand() % 6; //choose a random computer part
            cout << "You Gain a " << par[choice] << "." << endl;
            if(choice == 0) { //give user the correct item based on random input
                playerParts.setCPU(playerParts.getCPU()+1);
            } else if(choice == 1) {
                playerParts.setGPU(playerParts.getGPU()+1);
            } else if(choice == 2) {
                playerParts.setPowerSupplyUnit(playerParts.getPowerSupplyUnit()+1);
            } else if(choice == 3) {
                playerParts.setComputerCase(playerParts.getComputerCase()+1);
            } else if(choice == 4) {
                playerParts.setInternetCard(playerParts.getInternetCard()+1);
            } else if(choice == 5) {
                playerParts.setKeyboard(playerParts.getKeyboard()+1);
            }
 
       }
       
   }
 
}
 
 
 
int main()
{
 
    //create objects and declare variables
    User player1 = User();
    Parts playerParts = Parts();
 
    Room room1 = Room();
 
    int hackersDefeated = 0;
    int question = 1;
    int menu = 1;
    string playerName;
    int tr=0;
    cout << "Enter your name" << endl;
    cin >> playerName;
    player1.setName(playerName);
    int roomLevel = 1;
    int resetHackersDefeated = 0;
    Map map; // create object called map of type Map
 
    string r = "";
    int repCPU = 0;
    int repGPU = 0;
    int repPSU = 0;
    int repCas = 0;
    int repCard = 0;
    int repKM = 0;
    bool bestbuy=false;
    int count = 0;
    int numOfMoves=0;
    bool mapchange =false;
    do // loop to continously display a menu
    {
        cout << "Hello " << player1.getName() << " Select an option. Would you like to \n1) Travel the Server Roonm \n 2)Status Update \n 3) Repair Your Computer \n 4) Use antivirus software \n  5) Browse StackOverflow \n6) Quit" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1: // travel the server room
            if(resetHackersDefeated==3){ // check if the user can move on
                mapchange = true;
                resetHackersDefeated =0; // reset it to keep track for the next room
            }
            if(mapchange == true){
                roomLevel++; // increment room if declared true
 
            }
            if(bestbuy ==false){cout << "You're in a Best Buy!" << endl; // to put user in best buy only once at the beginning
            bestBuy(player1, playerParts);
            bestbuy=true;
 
            }
 
 
            if (roomLevel == 1) // map for room 1
            {
             
                map.spawnBestBuy(1, 3);
                map.spawnNPC(2, 5);
                map.spawnNPC(2, 6);
                map.spawnHacker(1, 1);
                map.spawnHacker(0, 1);
                map.spawnHacker(1, 0);
            }
            else if (roomLevel == 2) //map for room 2
            {
                map.resetMap();
                map.spawnBestBuy(2, 4);
                map.spawnNPC(1, 1);
                map.spawnNPC(2, 8);
               map.spawnHacker(1, 1);
                map.spawnHacker(0, 1);
                map.spawnHacker(1, 0);
            }
 
            else if (roomLevel == 3) // map for room 3
            {
                map.resetMap();
                map.spawnBestBuy(1, 4);
                map.spawnNPC(2, 2);
                map.spawnNPC(2, 6);
                map.spawnHacker(1, 1);
                map.spawnHacker(0, 1);
                map.spawnHacker(1, 0);
            }
            //map for room 4
            else if (roomLevel == 4)
            {
                map.resetMap();
                map.spawnBestBuy(1, 2);
                map.spawnNPC(2, 4);
                map.spawnNPC(2, 6);
               map.spawnHacker(1, 1);
                map.spawnHacker(0, 1);
                map.spawnHacker(1, 0);
            }
            //map for room 5
            else if (roomLevel == 5)
            {
                map.resetMap();
                map.spawnBestBuy(3, 1);
                map.spawnNPC(4, 6);
                map.spawnNPC(1, 2);
                map.spawnHacker(0, 1);
                map.spawnHacker(0, 2);
                map.spawnHacker(0, 3);
            }
 
            char move; // for storing user input
 
            // if (resetHackersDefeated == 3)
            // {
            //     roomLevel++;
            //     resetHackersDefeated = 0;
            // }
 
            // quit after 10 moves
 
            for (int i = 0; i < 10; i++) // loop for 10 moves in the server rooms
            {
 
                map.displayMap(); // pretty print map_data in terminal
 
                //come back to finish menu for computer parts
                //******
                // cout << "Available Parts: " << "CPU: " << playerParts.
                cout << "Valid moves are: " << endl;
                map.displayMoves(); // give user a menu of valid moves to pick from
 
                cout << "Input a move: ";
                cin >> move;
                cout << endl;
                map.executeMove(move); // move the player on map based on user input
 
                if (map.isBestBuyLocation()) // iif user is in a best buy
                {
 
                    cout << "You're in a Best Buy!" << endl;
                    bestBuy(player1, playerParts); // call the function
                }
                if (map.isHackerLocation()) // if user is at a hacker location
                {
                    char hac;
                    cout << "You've encountered a Hacker! Would you like to fight (y) or forfeit (n)? " << endl;
                    cin >> hac;
 
                    if (hac == 'y')
                    {
                        if (fightHacker(roomLevel, playerParts, player1, room1) == true) // check if they won
                        {
 
                            hackersDefeated++;
                            resetHackersDefeated++;
                            if (roomLevel != 5) // check that they are not in the final room
                            {
                                int temp = rand() % 10 + 1; // 30% chance of losing maintenence level
                                if (temp <= 3)
                                {
                                    player1.setComputerLevel(player1.getComputerLevel() - 10);
                                }
                            }
                            else
                            {
                                player1.setProgressLevel(player1.getProgressLevel() + 25); // update carmens progress
                                if (roomLevel != 5)
                                {
 
 
                                    int temp = rand() % 10 + 1;
                                    if (temp <= 3)
                                    {
                                        player1.setComputerLevel(player1.getComputerLevel() - 10); // update computer level
                                       
                                    }
                                }
                            }
                        }
                    }
                    else if (hac == 'n')//
                    {
                        playerParts.setCPU(0);
                        playerParts.setGPU(0);
                        playerParts.setPowerSupplyUnit(0);
                        playerParts.setComputerCase(0);
                        playerParts.setInternetCard(0);
                        playerParts.setKeyboard(0);
                        playerParts.setPreMadeComputer(0);
                    }
                }
 
                if (map.isNPCLocation()) // if user is at a NPC location
                {
                    cout << "You've encountered an NPC!" << endl;
                    NPC(playerParts, question); //call the NPC function
                   
                }
            }
            break;
        case 2: // case for status update
 
            cout << "Maintenance Level: " << player1.getComputerLevel() << "   "
                 << "#of Viruses: " << player1.getNumViruses() << "   "
                 << "Dogecoin: "
                 << player1.getDogecoin() << "   "
                 << "Player's Frustration Level: " << player1.getfrustrationLevel() << "   "
                 << "Carmen's Progress Level: " << player1.getProgressLevel() << "   "
                 << "Hackers Defeated: " << hackersDefeated << endl;
            break;
           
        case 3: // case for repaing computer
            //pring their inventory
            cout << "Inventory: \n"
                 << "CPU: " << playerParts.getCPU() << endl
                 << "GPU: " << playerParts.getGPU() << endl
                 << "Power Supply Unit: " << playerParts.getPowerSupplyUnit() << endl
                 << "Computer Case: " << playerParts.getComputerCase()
                 << endl
                 << "Internet Card: " << playerParts.getInternetCard() << endl
                 << "Keyboard and mouse: " << playerParts.getKeyboard() << endl;
           
            while (count < 5) // while they havent used the max amount of parts availabke to use to repair
            {
                cout << "Enter the name of the computer part you would like to use:" << endl;
                cin >> r;
                //check input and then ask how many of those parts the user wants to use
                if (r == "CPU")
                {
                   
                    cout << "How many of these parts would you like to use?" << endl;
                    cin >> repCPU;
                    count += repCPU;
                    playerParts.setCPU(playerParts.getCPU() - repCPU); // update their CPU
                    cout <<endl << count << endl;
                }
                if (r == "GPU")
                {
                    cout << "How many of these parts would you like to use?" << endl;
                    cin >> repGPU;
                    count += repGPU;
                    playerParts.setGPU(playerParts.getGPU() - repGPU); // update their GPU
                    cout << endl << count << endl;
                }
                if (r == "Power Supply Unit")
                {
                    cout << "How many of these parts would you like to use?" << endl;
                    cin >> repPSU;
                    count += repPSU;
                    playerParts.setPowerSupplyUnit(playerParts.getPowerSupplyUnit() - repPSU); // update their PSU
                    cout << endl << count << endl;
                }
                if (r == "ComputerCase")
                {
                    cout << "How many of these parts would you like to use?" << endl;
                    cin >> repCas;
                    count += repCas;
                    playerParts.setComputerCase(playerParts.getComputerCase() - repCas); // update their computer case
                    cout <<  endl << count << endl;
                }
                if (r == "InternetCard")
                {
                    cout << "How many of these parts would you like to use?" << endl;
                    cin >> repCard;
                    count += repCard;
                    playerParts.setInternetCard(playerParts.getInternetCard() - repCard); // update their internet cards
                }
                if (r == "Keyboard and Mouse")
                {
                    cout << "How many of these parts would you like to use?" << endl;
                    cin >> repKM;
                    count += repKM;
                    playerParts.setKeyboard(playerParts.getKeyboard() - repKM); // update their keyboards
                }
            }
            cout << "Your computer has been repaired" << endl;
            tr = ((20 * count) + player1.getComputerLevel());
           
            if(tr >100){
                player1.setComputerLevel(100); // set their copmuter level to 100
            }
            else{
                 player1.setComputerLevel(tr);
            }
           
            break;
        case 4: // case for using antivirus software
            if (playerParts.getAntiVirusSoftware() > 0) // check that they have software to use
            {
                room1.setvirus(0); // clear their computer of viruses
                cout << "Congradulations you are virus-free" << endl;
                playerParts.setAntiVirusSoftware(playerParts.getAntiVirusSoftware() - 1); // take away a antivrius stick
            }
            else
            {
                cout << "Not enough antivirus software. Head to Best Buy ASAP!" << endl;
            }
            break;
        }
        //misfortunes
        if (room1.getVirus() > 0)
        {
            player1.setComputerLevel(player1.getComputerLevel() - 10); // take away health
            cout << "Your computer has been infected with a virus! We recommend using antivirus software in the menu" << endl;
        }
       
 
        int pickedChoice = (int)(rand() % 10) + 1; // random number form 1 to 10
        int misfortune = (int)(rand() % 3) + 1;
        if (pickedChoice < 4)
        {
            if (misfortune == 1) //misfrotune 1
            {
                cout << "OH NO! Your team was robbed by Carmen’s dastardlyhackers! You have no antivirus software left!" << endl;
                playerParts.setAntiVirusSoftware(0);
            }
            else if (misfortune == 2) // misfortune 2
            {
                player1.setComputerLevel(50);
                cout << "OH NO! Your computer was damaged! " << endl;
            }
            else // misfortune 3
            {
                player1.setfrustrationLevel(player1.getfrustrationLevel() + 10); // increase user frustration
                cout << "OH NO! Why won’t my code work!!!! Your frustration level was increased." << endl;
            }
        }
        player1.setfrustrationLevel(player1.getfrustrationLevel() + 2); // every move increase frustration
        //check for game end scenarios
        if(player1.getProgressLevel() >=100 || player1.getComputerLevel() <0 || player1.getfrustrationLevel() >=100){
            if(player1.getProgressLevel() >=100){
                cout << "Carmen's Progress Level reached 100. You Lose" << endl;
            }
            if(player1.getComputerLevel() <0){
                cout << "You're Maintenance Level reached 0. You Lose" << endl;
            }
             if( player1.getfrustrationLevel() >=100){
                cout << "You're Frustration Level reached 100. You Lose" << endl;
            }
            break;
        }
    }
 
    while (menu != 6);
   
    cout << "You Quit" << endl;
 
}
 
 

