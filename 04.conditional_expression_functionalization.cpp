#include <iostream>
using namespace std;

enum State{ STATE_WALK, STATE_JUMP, STATE_ATTACK, STATE_DAMAGE };

float y;
float speed;
int state;

bool isJump()
{	
	return y > 0.0f;
}

bool isDamage()
{	
	return state == State::STATE_DAMAGE;
}

bool isDash()
{
	// 한 줄로 조건식을 모두 표현하는 방법	
	return (speed >= 10.0f) && !isJump && !isDamage;

	// if문이 많아지지만 가독성이 높아지는 방법
	if (isJump()) return false;
	if (isDamage()) return false;
	if (speed < 10.0f) return false;
	return true;
}

int main()
{
	if (isDash()) {}	// 조건식을 함수화해서 최종적으로 대시중인지 확인하는 함수만 호출하면 된다.
}