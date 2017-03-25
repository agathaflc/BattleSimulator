/*
 * Fighter.h
 *
 *  Created on: Mar 25, 2017
 *      Author: fagatha
 */

#ifndef FIGHTER_H_
#define FIGHTER_H_

class Fighter {
	enum AttackType { magical, physical };
private:
	int healthPoint;
	int pDef;
	int mDef;
	int patkAbs;
	int patkRoll;
	int matkAbs;
	int matkRoll;
	void reduceHP(int reduction);
	void increaseHP(int addition);

public:
	void receiveDamage(AttackType type, int dmgAmount);
	void attack(Fighter target, AttackType type);
};




#endif /* FIGHTER_H_ */
