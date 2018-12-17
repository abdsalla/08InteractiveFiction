// 08InteractiveFiction.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "functions.h"

using namespace std;

class Identity
{
protected:
	string Name;
public:
	int Charisma;
	int Wisdom;
	int Power;
	int Intelligence;
	int Dexterity;
	Identity()
	{}
	Identity(string N, int C, int W, int P, int I, int D)
	{
		Name = N;
		Charisma = C;
		Wisdom = W;
		Power = P;
		Intelligence = I;
		Dexterity = D;
	}
	void setName(string N)
	{
		Name = N;
	}
	void setCharisma(int C)
	{
		Charisma = C;
	}
	void setWisdom(int W)
	{
		Wisdom = W;
	}
	void setIntelligence(int I)
	{
		Intelligence = I;
	}
	void setPower(int P)
	{
		Power = P;
	}
	void setDexterity(int D)
	{
		Dexterity = D;
	}

	string getName()
	{
		return Name;
	}
	int getCharisma()
	{
		return Charisma;
	}
	int getWisdom()
	{
		return Wisdom;
	}
	int getIntelligence()
	{
		return Intelligence;
	}
	int getPower()
	{
		return Power;
	}
	int getDexterity()
	{
		return Dexterity;
	}

	void Displaycharacter()
	{
		cout << " Your name: " << Name << endl;
		cout << " Charisma: " << Charisma << endl;
		cout << " Power: " << Power << endl;
		cout << " Intelligence: " << Intelligence << endl;
		cout << " Dexterity: " << Dexterity << endl;
		cout << " Wisdom: " << Wisdom << endl;
	}
};