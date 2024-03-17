#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

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
	Unit(const double& h, const double& a, const double& d,const double& i,const char& r);
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

//Unit::Unit():health(0),attack(0),defense(0),intel(0),rank(){
//	cout << "Inside default unit constructor: ";
//}

Unit::Unit() :Unit(0, 0, 0, 0, ' ')
{
	cout << "Inside default" << this->name << " copy constructor : " << endl;
}

Unit::Unit(const double& h, const double& a, const double& d, const double& i, const char& r)
	: health(h),attack(a),defense(d),intel(i),rank(r)
{
	cout << "Inside non-default" << this->name << " copy constructor : " << endl;
}
; //smarter way


//Unit::Unit(const double& health, const double& attack, const double& defense, const double& intel, const char& rank)
//{
//}
//;

//Unit::Unit(const double& health, const double& attack, const double& defense, const double& intel, const char& rank):health(0),attack(0),defense(0),intel(0),rank(){
Unit::Unit(const Unit&)
{
	cout << "Inside copy" << this->name << " constructor: ";
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

void Unit::setRank(const char& r)
{
	this->rank = r;
}

//getters
double Unit::getHealth()
{
	return this->health;
};

double Unit::getAttack()
{
	return this->attack;
};

double Unit::getDefense()
{
	return this->defense;
};

double Unit::getIntel()
{
	return this->intel;
};

double  Unit::getRank()
{
	return this->rank;
};

//member functions
void Unit::fight(Unit& u)
{
	cout << u.name << " fighting" << endl;
	u.health-= this->attack;
};

void Unit::takeDamage(Unit& u)
{
	cout << this->name << " taking " << u.attack << " damage " << endl;
	this->health -= u.attack;
};

void win()
{
	
}

int main()
{


	system("Pause");
	return 0;
}

