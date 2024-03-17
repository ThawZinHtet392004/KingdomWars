#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Rank
{
	S,
	A,
	B,
	C,
	none
};

class Unit
{
private:
	double health;
	double attack;
	double defense;
	double intel;
	string name;
	static int quantity;

public:
	//constructors
	Unit();
	Unit(const double& h, const double& a, const double& d, const double& i, const string& n);
	Unit(const Unit&);

	//destructor
	virtual ~Unit();

	//setters
	virtual void setHealth(const double&);
	virtual void setAttack(const double&);
	virtual void setDefense(const double&);
	virtual void setIntel(const double&);
	virtual void setName(const string&);

	//getters
	virtual double getHealth() const;
	virtual double getAttack() const;
	virtual double getDefense() const;
	virtual double getIntel() const;
	virtual string getName() const;
	static int getCount();

	//member functions
	virtual void fight(Unit&); //cant put const cuz variables will be modified
	virtual void takeDamage(Unit&);
};


