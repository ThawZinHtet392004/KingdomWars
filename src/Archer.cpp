#include "Archer.h"

Archer::Archer(): Archer(Archertype::Soldier,10,100,20,20,40," ") //not zero since they must have default values for game startup
{
	cout << "Creating " << Unit::getName() << " default constructor " << endl;
}

Archer::Archer(const Archertype& archertype, const int& arrow, const double& h, const double& a, const double& d, const double& i, const string& n):Unit::Unit(h, a, d, i, n),arrows(arrow), archertype(archertype)
{
	switch (archertype)
	{
	case Archertype::Captain:
	{
		this->attack_mult = 2;
		this->type = Arrowtype::Blaze;
	}
	case Archertype::Ranger:
	{
		this->attack_mult = 1.5;
		this->type = Arrowtype::Rain;
	}
	case Archertype::Soldier:
	{
		this->attack_mult = 1;
		this->type = Arrowtype::none;
	}
	default:
		break;
	}
}

Archer::Archer(const Archer& archer): Unit(archer.getHealth(),archer.getAttack(),archer.getDefense(),archer.getIntel(),archer.getName())
{
	this->archertype = archer.getArchertype();
	this->arrows = archer.getArrows();
	this->attack_mult = archer.multiplier();
}

int Archer::getArrows() const
{
	return this->arrows;
}

Archertype Archer::getArchertype() const
{
	return this->archertype;
}

int Archer::multiplier() const
{
	return this->attack_mult;
}

Archer::~Archer()
{

}

void Archer::reload(const int& arrow)
{
	this->arrows = arrow;

}
