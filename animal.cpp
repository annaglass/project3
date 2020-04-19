#include <iostream>
#include <string>
#include <fstream>
#include "animal.h"
using namespace std;

Animal :: Animal()
{
    animalType = "";
    animalName = "";
    for (int i; i < SIZE; i++)
    {
        scores[i] = 0;
    }
    obedience = 0;
    speaking = 0;
    navigation = 0;
    fighting = 0; 
    rescue = 0;
    agility = 0;
    //constructor, set all stats & animal characteristics to 0 or ""
}


Void Animal :: setAnimal(string type);
{
    animalType = type;
}

Void Animal :: setAnimalName (string name);
{
    // takes a string from user for what name they want to give their animal
    animalName = name;
}

Void Animal :: setObedience(int level);
{
    obedience = level;
}

Void Animal :: setSpeaking(int level);
{
    speaking = level;
}

Void Animal :: setNavigation(int level);
{
    navigation = level;
}

Void Animal :: setAgility(int level);
{
    agility = level;
}

Void Animal :: setRescue(int level);
{
    rescue = level;
}

Void Animal :: getObedience(int level);
{
    return obedience;
}

Void Animal :: getSpeaking(int level);
{
    return speaking;
}

Void Animal :: getNavigation(int level);
{
    return navigation;
}

Void Animal :: getfighting(int level);
{
    return fighting;
}

Void Animal :: getAgility(int level);
{
    return agility;
}

Void Animal :: getRescue(int level);
{
    return rescue;
}

Void Animal :: increaseSkillLevel(bool); 
{
    // 1. Takes bool as to whether they completed the level or not
    // 2. Increases skill level corresponding the the challenge
}

String Animal :: getAnimalName();
{
    return animalName;
}


Void Animal :: printStats(int i); 
{
    cout << a
    cout << "Obedience: " << animals[i].getObedience() << endl;
    cout << "Speaking: " << animals[i].getSpeaking() << endl;
    cout << "Navigation: " << animals[i].getNavigation() << endl;
    cout << "Fighting: " << animals[i].getFighting() << endl;
    cout << "Agility: " << animals[i].getAgility() << endl;
    cout << "Rescuse: " << animals[i].getRescue() << endl;
    // gets the current stats for the animal
}

Int Animal :: findChallenge(int i)
{
     	int obed = animals[i].getObedience();
	if (obed < 5)
	{
		return 1;
	}
	int speak = animals[i].getSpeaking();
	if (speak < 5)
	{
		return 2;
	}
	int nav = animals[i].getNavigation();
	if (nav < 5)
	{
		return 3;
	}
	int fight = animals[i].getFighting();
	if (fight < 5)
	{
		return 4;
	}
	int agil = animals[i].getAgility();
	if (agil < 5)
	{
		return 5;
	}
	int resc = animals[i].getRescue();
	if (resc < 5)
	{
		return 6;
	}
}

Void Animal :: writeAnimalStats(string);
{
    // when a user moves on to the next tier or chooses to quit, it writes
    // their stats to a file (essentially saving their data)
    
}

Bool Animal :: sufficientSkillLevel(int, int);
{
    // takes the position on the matrix 
    // checks if the animals skill level is high enough to move onto the next tier
}
