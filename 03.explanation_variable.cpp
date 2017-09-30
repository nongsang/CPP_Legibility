#include <iostream>
using namespace std;

enum State{ STATE_WALK, STATE_JUMP, STATE_ATTACK, STATE_DAMAGE };

int main()
{
	float speed;
	float y;
	int state;

	// 캐릭터가 대시중인가?
	// 너무 알아보기 힘들다.
	//if (speed >= 10.0f && !(y > 0.0f) && state != State::STATE_DAMAGE) {}

	// 설명 전용 변수를 만든다.
	const bool isJump = y > 0.0f;	// 점프 하고있는지를 검사
	const bool isDamage = state == State::STATE_DAMAGE;		// 데미지를 받는 상태인지 검사
	const bool isDash = (speed >= 10.0f) && !isJump && !isDamage;	// 속도가 10이상인지 검사

	if (isDash) {}		// 모든 조건이 맞아 떨어졌을 때 대시한다고 설명 변수 사용
}