// 08InteractiveFiction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

char characterclass;

char GetTextFromUser(string ynquestion);
char GetClass(string classquestion);
void intro();
void characterbackground();


int main()
{
	string character;


	intro();
	system("pause");
	//char answer1 = GetTextFromUser("yes or no?");
	//cout << " thanks for answering: " << answer1 << endl;
	system("pause");
	char answer2 = GetClass("First create your character, w = wizard, b = barbarian, r = rogue ");
	characterclass = answer2;
	characterbackground();
	system("pause");
	
    return 0;
}

void intro()
{
	cout << "Welcome to Fantasy Sprint, the quickest fantasy text game known to man!" << endl;
	cout << "This where you will start!" << endl;
}

void characterbackground()
{
	if (characterclass == 'b')
	{
		cout << "You are one the mightiest warriors in all of the land and plan to \n venture to unmapped territory to fight unknown terrors and claim prize along the way." << endl;
		cout << "You need a vessel for your travels across the seas." << endl;
		system("pause");
		cout << "You go to the docks in your town and find the local sailors prepping to go out to sea for some fishing " << endl;
		cout << "You then notice someone new around town that is selling all kinds of boats " << endl;
		cout << "You approach him and look at all his boats at the docks but they are all a little too pricey" << endl;
		cout << "The boat salesman start tending to another custmer, he doesn't seem to be paying attention to you and you are close to a sturdy war canoe of his" << endl;
		cout << "Will you take the canoe now that his back is turned?" << endl;
		char answer1 = GetTextFromUser("yes or no?");
		if (answer1 == 'y')
		{
			cout << "You decide to confiscate the canoe from the salesman he is nothing but a small stepping stone in your journey to glory after all " << endl;
			cout << "He decides to challenge you by telling you to stop after he turns around and notices you, you strike him and continue to take some oars and supplies from him " << endl;
			cout << "He calls the guards on you, and you stand there inviting them to try and stop you, for you will never turn down any challenge " << endl;
			system("pause");
			cout << "You stand there overpowerng and defeating every guard and person that tries to aid in stopping you, this only proves that there is no one on this land that can give you a challenge " << endl;
			cout << "You walk over the beaten up the bodies of the people that used to admire you for your deeds and might for the good of the people, none of that matters now, all that matters is the challenge across the sea, the opinions of the weak do not matter" << endl;
		}
		if (answer1 == 'n')
		{
			cout << "No, you are a warrior of righteousness, that would be wrong. " << endl;
			cout << "The salesman asks your name to which you answer, he gives you a deal after this " << endl;
			cout << "The other townspeople spoke to him about your deeds he would be honored to make a boat for you free of charge, but you need to provide the wood since he doesn't have any " << endl;
			cout << "He gives you a list of the kinds of wood he needs to make it for you, you take the list and go the forest " << endl;
			system("pause");
			cout << "You fell all needed trees of each kind with your bare hands to satisfy the list, and carry it back to the salesman " << endl;
			cout << "After bringing them back the salesman, he is suprised and tells you that that the amount is enough to creat a grand vessel for you and the townsfolk agree to help you since you have helped them in the past. " << endl;
			cout << "Weeks later the townsfolk present your giant ship and soome plan to come with you to aid you on your journey, all that is left is for you to sail to your destiny " << endl;
		}
	}
	else if (characterclass == 'w')
	{
		cout << "You have been studying and practicing magic since you were a lad and have gained a substantial amount of knowledge pertainign to the magic of this world," << endl;
		cout << "but you aren't satisfied.  You have read many tomes about ancient visits from irregular beings that appeared out of thin air, there has to be extraterrestial magical lifeforms that fit this description" << endl;
		cout << "If you are to learn more about the mysteries about magic, then you have to venture into the unknown realms of the world. " << endl;
		cout << "There is one spell that can transport you to the outer realms to explore but it requires a bit of preparation. " << endl;
		cout << "You have spents days preparing the magical teleportation circle, all that is left is the incantation" << endl;
		cout << "Will you do the incantation?" << endl;
		char answer1 = GetTextFromUser("yes or no?");
		if (answer1 == 'y')
		{
			cout << "After an hour of reciting and concentration, you perform to the spell to the letter and nothing happens, you are very confused you did everything to the letter " << endl;
			cout << "Then all the lighting in your home shuts off, there is a dark silence filling the room, then suddenly " << endl;
			cout << "A dark portal opens up and a dark tall slender figure walks through the portal towards you, he appears to be a Greater demon!!" << endl;
			cout << "The Greater demon performs an unnatural formation with his hands... this has to be an offensive spell, you need to counteract it quickly!! " << endl;
			cout << "You try to weave a spell of your own but..." << endl;
			cout << "nothing happens, you have been silenced, your fate slowly creeps in.. " << endl;
		}
		if (answer1 == 'n')
		{
			cout << "You decide to prolong your teleportation spell, you are wise enough to know that every spell is dangerous unless fully studied before practiced, time to hit the books" << endl;
			cout << "After weeks of studying and crossreferncing each word in the spell you figure out that a mispronounciation of the words could turn the spell into one that opens a one way portal to your location for anything on the other side to pass through " << endl;
			cout << "Now that you have got the pronounciation you can prepare it once more and try again. " << endl;
		}
	}
	else if(characterclass == 'r')
	{
		cout << "It's hard for you to pass a fat coinpurse right in front of you, there are too many complacent folk out there with wide open pockets " << endl;
		cout << "You've had enough with petty pickpocketing it's too easy, you're itching for the big haul" << endl;
		cout << "The emporer's fortune has been safe for too long, you plan to infiltrate the royal palace in broad daylight" << endl;
		cout << "You gather up all your lockpicks, crowbar, grappling hook, special non-stick enchanted boots, and cloak " << endl;
		cout << "You immediately satisfy the urge by leaping from rooftop to rooftop towards the towering palace past the bustling town you are currently in " << endl;
		cout << "Gaining entry into the palace's courtyard was a walk in the park, you then sneak past the partolling guards and go under a large bush for cover " << endl;
		cout << "There are no other spots in the courtyard, and there is a window about 22 feet high up on the wall, it's now or never " << endl;
		cout << "Will you use the grappling hook to scale the wall?" << endl;
		char answer1 = GetTextFromUser("yes or no?");
		if (answer1 == 'y')
		{
			cout << "You succesfully use the grappling hook and throw it to the top at the window" << endl;
			cout << "The sound of glass breaking alerted all close guards, then they noticed the long grappling hook hanging from where the sound came from " << endl;
			cout << "They have found you, and there is no where to escape, all is lost " << endl;
		}
		if (answer1 == 'n')
		{
			cout << "No, you are not an amateur and scaling the wall with a hook is too easy " << endl;
			cout << "You disconnect the hook from the rope and tie one end of the rope to the base of the bush and the other end to your waist " << endl;
			cout << "From your cover you throw your hook to the other side of the courtyard wall, all of the guards then run towards the sound to investigate, they have fallen for your trap" << endl; 
			cout << "You then proceed to use you skills to climb the palace with your hands and lockpicking the window is child's play " << endl;
			cout << "The window leads to and empty grand bedroom, it must be the emperor's, his fortune is practically around the corner now." << endl;
		}
	}
}

char GetClass(string classquestion)
{
	char response;
	do
	{
		cout << classquestion << " (w/b/r): ";
		cin >> response;
	} while (response != 'w' && response != 'b' && response != 'r');

	return response;
}

char GetTextFromUser(string ynquestion)
{
	char response;
		do
		{
			cout << ynquestion << " (y/n): ";
			cin >> response;
		} while (response != 'y' && response != 'n'); 

		return response;
}