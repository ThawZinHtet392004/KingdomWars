#include "Unit.h"
#include <iostream>

using namespace std;


Unit::Unit() :Unit(0, 0, 0, 0, " ")
{
	cout << "Inside default" << this->name << " copy constructor : " << endl;
}

Unit::Unit(const double& h, const double& a, const double& d, const double& i, const string& n)
	: health(h), attack(a), defense(d), intel(i), name(n)
{
	cout << "Inside non-default " << this->name << " copy constructor : " << endl;
}
 //smarter way
//Unit::Unit(const double& health, const double& attack, const double& defense, const double& intel, const char& rank)
//{
//}
//;

//Unit::Unit(const double& health, const double& attack, const double& defense, const double& intel, const char& rank):health(0),attack(0),defense(0),intel(0),rank(){
Unit::Unit(const Unit& u)
{
	cout << "Inside copy " << this->name << " constructor: ";
	this->health = u.health;
	this->attack = u.attack;
	this->defense = u.defense;
	this->intel = u.intel;
	this->name = u.name;
}

Unit::~Unit()
{
	
}

//setters

void Unit::setHealth(const double& h)
{
	this->health = h;
}

void Unit::setAttack(const double& a)
{
	this->attack = a;
}

void Unit::setDefense(const double& d)
{
	this->defense = d;
}

void Unit::setIntel(const double& i)
{
	this->intel = i;
}

void Unit::setName(const string& n)
{
	this->name = n;
}

//getters
double Unit::getHealth() const
{
	return this->health;
};

double Unit::getAttack() const
{
	return this->attack;
};

double Unit::getDefense() const
{
	return this->defense;
};

double Unit::getIntel() const
{
	return this->intel;
};

string Unit::getName() const
{
	return this->name;
}
;

//member functions
void Unit::fight(Unit& u)
{
	cout << u.name << " fighting" << endl;
	u.health -= this->attack;
};

void Unit::takeDamage(Unit& u)
{
	cout << this->name << " taking " << u.attack << " damage " << endl;
	this->health -= u.attack;
};



