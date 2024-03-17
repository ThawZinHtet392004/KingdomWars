#pragma once

#include <string>

class Unit
{
private:
	double health;
	double attack;
	double defense;
	double intel;
	char rank;
	static int quantity;
	string name;

public:
	//constructors
	Unit();
	Unit(const double& h, const double& a, const double& d, const double& i, const char& r);
	Unit(const Unit&);

	//destructor
	~Unit();

	//setters
	virtual void setHealth(const double&);
	virtual void setAttack(const double&);
	virtual void setDefense(const double&);
	virtual void setIntel(const double&);
	virtual void setRank(const char&);

	//getters
	virtual double getHealth();
	virtual double getAttack();
	virtual double getDefense();
	virtual double getIntel();
	virtual double getRank();
	static int getCount();

	//member functions
	virtual void fight(Unit&); //cant put const cuz variables will be modified
	virtual void takeDamage(Unit&);
};


