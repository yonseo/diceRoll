
/* 
 * File:   main.cpp
 * Author: Yonseo
 *
 * Created on December 10, 2020, 8:42 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//declare variables
int result;
int health;
int experience;
int gold;
int monster_health;
int monster_attack;
int user_input;



int sum(int a, int b)
{
    result = a + b;
    return (result);
}

int subtract(int a, int b)
{
    result = a - b;
    return (result);
}

string room[3] = {
    "cave",
    "shop",
    "home"
};

int main() {

    cout << "What would you like to do?" << endl;
    cout << "Select a room: " << endl;
    
    for(int i = 0; i < 3; i++){
        cout << i << ") " << room[i] << endl;
    }
    
    cin >> user_input;
    if(user_input < 3)
    {
        cout << "You have selected room: " << room[user_input] << endl;
    }
    else
    {
        cout << "room was not found. Try again." << endl;
    }
    
    return 0;
}

