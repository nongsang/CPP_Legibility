#include <iostream>
using namespace std;

enum State{STATE_WALK, STATE_JUMP, STATE_ATTACK };

int main()
{
	int state;

	// 아무런 설명 없이 등장하는 상수를 매직넘버라 한다.
	// 프로그램의 흐름을 알지 못하면 상수의 의미를 알 수 없으므로 매직넘버를 사용하면 안된다.
	/*if (state == 0) {}
	else if (state == 1) {}
	else if (state == 2) {}*/

	// 열거형을 사용하여 매직넘버를 없애자.
	if (state == STATE_WALK) {}			// 일반적으로 쓰는 방법
	else if (state == State::STATE_JUMP) {}		// 열거형의 범위지정 연산자를 이용하여 사용하는 방법
	else if (state == State::STATE_ATTACK) {}
}