#pragma once
//overload 
#pragma once
#include <iostream>

using namespace std;

class mainGame
{
public:
	//그냥 아이템 사용하는 함수
	void UseItem();
	//코인의 가스를 소모하는 함수
	void UseItem(int gas);

	/*
	오버로딩: 객체 내애서 같은 이름 함수를 형태가 다르게 재정의 하는것.
	오버라이딩 : 상속 관계에서  같은 이름의 함수를자식 객체에서 재정의 하는것
	*/

	mainGame();
	~mainGame();

};