#include <iostream>
using namespace std;

enum State{STATE_WALK, STATE_JUMP, STATE_ATTACK };

int main()
{
	int state;

	// �ƹ��� ���� ���� �����ϴ� ����� �����ѹ��� �Ѵ�.
	// ���α׷��� �帧�� ���� ���ϸ� ����� �ǹ̸� �� �� �����Ƿ� �����ѹ��� ����ϸ� �ȵȴ�.
	/*if (state == 0) {}
	else if (state == 1) {}
	else if (state == 2) {}*/

	// �������� ����Ͽ� �����ѹ��� ������.
	if (state == STATE_WALK) {}			// �Ϲ������� ���� ���
	else if (state == State::STATE_JUMP) {}		// �������� �������� �����ڸ� �̿��Ͽ� ����ϴ� ���
	else if (state == State::STATE_ATTACK) {}
}