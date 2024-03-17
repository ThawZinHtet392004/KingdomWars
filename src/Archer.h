#pragma once

#include "Unit.h"
enum class  ArcherType
{
	Ranger,
	Captain,
	Soldier,
	none
};

enum class Arrowtype 
{
	Blaze,
	Rain,
	none
};

class Archer: public Unit
{
private:
	int arrows;
	 ArcherType archer_type;
	Arrowtype arrow_type;
	double attack_mult; 

public:
	//constructors
	Archer();
	Archer(const ArcherType& archertype, const int& arrow_count, const double& health, const double& attack, const double& defense, const double& intelligence, const string& name);
		Archer(const Archer&); 
	//Getters
	int getArrows() const;
	 ArcherType getArchertype() const;
	double multiplier() const;

	//Setters

	//destructors
	~Archer();

	//Member functions
	void reload(const int&attackrrow);
};

