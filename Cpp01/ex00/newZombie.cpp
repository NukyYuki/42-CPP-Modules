#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *newzombie = new Zombie(name);
	return (newzombie);
}