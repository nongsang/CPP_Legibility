#include <iostream>
using namespace std;

enum State{ STATE_WALK, STATE_JUMP, STATE_ATTACK, STATE_DAMAGE };

int main()
{
	float speed;
	float y;
	int state;

	// ĳ���Ͱ� ������ΰ�?
	// �ʹ� �˾ƺ��� �����.
	//if (speed >= 10.0f && !(y > 0.0f) && state != State::STATE_DAMAGE) {}

	// ���� ���� ������ �����.
	const bool isJump = y > 0.0f;	// ���� �ϰ��ִ����� �˻�
	const bool isDamage = state == State::STATE_DAMAGE;		// �������� �޴� �������� �˻�
	const bool isDash = (speed >= 10.0f) && !isJump && !isDamage;	// �ӵ��� 10�̻����� �˻�

	if (isDash) {}		// ��� ������ �¾� �������� �� ����Ѵٰ� ���� ���� ���
}