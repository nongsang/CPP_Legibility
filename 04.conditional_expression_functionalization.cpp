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
	// �� �ٷ� ���ǽ��� ��� ǥ���ϴ� ���	
	return (speed >= 10.0f) && !isJump && !isDamage;

	// if���� ���������� �������� �������� ���
	if (isJump()) return false;
	if (isDamage()) return false;
	if (speed < 10.0f) return false;
	return true;
}

int main()
{
	if (isDash()) {}	// ���ǽ��� �Լ�ȭ�ؼ� ���������� ��������� Ȯ���ϴ� �Լ��� ȣ���ϸ� �ȴ�.
}