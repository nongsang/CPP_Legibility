#include <iostream>
using namespace std;

int main()
{
	float t;			// 변수 이름으로 어떤 용도의 변수인지 알 수 없다.
	float time;			// 시간과 관련된 변수라는 것을 변수 이름만으로 알 수 있다.
	float limitTime;	// 좀 더 구체적으로 제한시간 전용 변수라는 것을 알 수 있다.

	int matrix[4][4];
	for (int i = 0; i < 4; ++i)
		for (int j = 0; j < 4; ++j)
			matrix[i][j] = 0;		// 배열의 인덱스 전용일 경우 i, j, k등 짧은 이름으로 쓰자.
}

// 모든 내용은 '코딩의 기술'에 있는 내용이다.