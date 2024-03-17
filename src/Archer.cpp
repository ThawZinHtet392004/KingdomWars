#include "Archer.h"

Archer::Archer(): Archer(ArcherType::Soldier,10,100,20,20,40, "Default Archer") //not zero since they must have default values for game startup
{
	cout << "Creating " << Unit::getName() << " default constructor " << endl;
}


Archer::Archer(const ArcherType &archertype, const int&arrow_count, const double&health, const double&attack, const double& defense, const double& intelligence, const string& name)
	:Unit::Unit(health,attack,defense,intelligence,name), archer_type(archertype), arrows(arrow_count)
{
	switch (archertype)
	
	{
		case ArcherType::Captain:
	
		{
			this->attack_mult = 2;
			this->arrow_type = Arrowtype::Blaze;
		}
		case ArcherType::Ranger:
		{
			this->attack_mult = 1.5;
			this->arrow_type = Arrowtype::Rain;
		}
		case ArcherType::Soldier:
		{
			this->attack_mult = 1;
			this->arrow_type = Arrowtype::none;
		}
		default:
			break;
	}
}

Archer::Archer(const Archer& archer): Unit(archer.getHealth(),archer.getAttack(),archer.getDefense(),archer.getIntel(),archer.getName())
{
	this->archer_type =archer.getArchertype();
	this->arrows =archer.getArrows();
	this->attack_mult =archer.multiplier();
}

int Archer::getArrows() const
{
	return this->arrows;
}

 ArcherType Archer::getArchertype() const
{
	return this->archer_type;
}

double Archer::multiplier() const
{
	return this->attack_mult;
}

Archer::~Archer()
{

}

void Archer::reload(const int&attackrrow)
{
	this->arrows =attackrrow;

}
