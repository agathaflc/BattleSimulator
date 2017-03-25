/*
 * Fighter.cpp
 *
 *  Created on: Mar 25, 2017
 *      Author: fagatha
 */

#include "Fighter.h"
#include <cstdlib>
#include <math.h>

void Fighter::reduceHP(int reduction) {
	healthPoint -= reduction;
}

void Fighter::increaseHP(int addition) {
	healthPoint += addition;
}

void Fighter::receiveDamage(AttackType type, int dmgAmount) {
	switch (type) {
		case physical:
			reduceHP(ceil(dmgAmount*(1-pDef/100.0)));
			break;
		case magical:
			reduceHP(ceil(dmgAmount*(1-mDef/100.0)));
			break;
	}
}

void Fighter::attack(Fighter target, AttackType type) {
	int totalAttack = 0;
	switch (type) {
		case physical:
			totalAttack = patkAbs + (rand()%patkRoll+1);
			break;
		case magical:
			totalAttack = matkAbs + (rand()%matkRoll+1);
			break;
	}

	target.receiveDamage(type, totalAttack);
}
