#pragma once

#include "Unit.h"
enum class Archertype
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

class Archer:public Unit
{
private:
	int arrows;
	Archertype archertype;
	Arrowtype type;
	int attack_mult; 

public:
	//constructors
	Archer();
	Archer(const Archertype&, const int&, const double& h, const double& a, const double& d, const double& i ,const string& n);
	Archer(const Archer&); //changed to unit so it has access to unit parent class

	//Getters
	int getArrows() const;
	Archertype getArchertype() const;
	int multiplier() const;

	//Setters

	//destructors
	~Archer();

	//Member functions
	void reload(const int& arrow);
};

