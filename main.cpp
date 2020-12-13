
/* 
 * File:   main.cpp
 * Author: Yonseo
 *
 * Created on December 10, 2020, 8:42 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <regex> // check for number or string

using namespace std;

//declare variables

//monster
int monster_health;
int monster_attack;

//player
int result;
int health = 100;
int experience = 0;
int attack = 10;
int gold = 0;
int playerInput;

string room[3] = {
    "cave",
    "shop",
    "home"
};

bool isNumber(int playerInput){
    
    if (isdigit(playerInput) == false){
        return false;
    }
    return true;

}

 

// number of elements in array
int array_count_room = sizeof(room) / sizeof(room[0]);


int main() {

    cout << "What would you like to do?" << endl;
    cout << "Select a room: " << endl;
    
    for(int i = 0; i < 3; i++){
        cout << i << ") " << room[i] << endl;
    }
    
    cin >> playerInput;
    if(isNumber(playerInput) == true)
    {
        //user entered a number
        if(playerInput < array_count_room)
        {
            //within the array
            cout << "You have selected room: " << room[playerInput] << endl;
        }
        else
        {
            //input is number
            //outside of array
            //no room found
            cout << "no room found with that number" << endl;
        }
    }
    
    if(isNumber(playerInput) == false)
    {
        cout << "ERROR ENCOUNTERED!" << endl;
        cout << "input is not a number" << endl;
        //cout << "player input test: " <<  << endl;
        //cout << "A room was not found. Try again." << endl;
    }
    
    
    
    return 0;
}

