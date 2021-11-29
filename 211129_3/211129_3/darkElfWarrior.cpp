#include "darkElf.h"
void darkElf::QSkill()
{
	cout << "기본엘프 Q스킬 : 활쏘기" << endl;
}

void darkElf::WSkill()
{
	cout << "기본엘프의  W 스킬 : 연사" << endl;

}

void darkElf::ESkill()
{
	cout << "기본엘프의 E 스킬 : 매달리기" << endl;

}

void darkElf::RSkill()
{
	cout << "기본엘프의 R 스킬 : 암살" << endl;

}


void darkElf::RSkill()
{
	_hp = 100;
	_mp = 50;
	_atk = 10;
	_speed = 3.5f;

	cout << "다크엘프체력 :" << _hp << endl;
	cout << "다크엘프마력 :" << _mp << endl;
	cout << "다크엘프공격력 :" << _atk << endl;
	cout << "다크엘프스피드 :" << _speed << endl;

}
