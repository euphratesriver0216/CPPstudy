#pragma once
#include <iostream>

using namespace std;

class darkElf
{
private:
	int _hp;
	int _mp;
	int _atk;
	float _speed;

public:
	virtual void QSkill();
	virtual void WSkill();
	virtual void ESkill();
	virtual void RSkill();

};