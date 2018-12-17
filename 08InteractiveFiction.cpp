// 08InteractiveFiction.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "functions.h"
#include "classes_functions.cpp"


using namespace std;


int main()
{
	string character; // string character that stores the answer of which class the player chooses

	intro(); // starts of the player with an introduction function from the functions header file
	system("pause");
	//char answer1 = GetTextFromUser("yes or no?");
	//cout << " thanks for answering: " << answer1 << endl;
	char answer2 = GetClass("First create your character, w = wizard, b = barbarian, r = rogue "); // goes into the function GetClass to prompt the player for the class question
	characterclass = answer2; // we use character class to store the answer2 value since it cannot be used outside of its function that it was defined in
	Identity(setName(string N));
	Identity(Displaycharacter());
	characterbackground(); // the value in character class is then used to determine which outcome the player branches out to
	system("pause");
	
    return 0;
}
