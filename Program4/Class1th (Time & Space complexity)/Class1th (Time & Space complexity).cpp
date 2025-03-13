#include <iostream>

using namespace std;

int main()
{
#pragma region 시간 복잡도
	//	프로그램의 입력값과 연산 수행 시간의 상관관계를 나타내는 척도
#pragma region 상수 시간 O(1)
		// 입력 크기와 상관없이 일정한 시간 복잡도를 가지는 시간	
		// ex) 배열의 요소접근

#pragma endregion

#pragma region 로그 시간 O(log n)
		//	데이터 크기에 따라 실행 시간이 로그함수 형태로 증가하는 시간 복잡도
		//	ex) 이진 탐색

#pragma endregion

#pragma region 선형 시간 O(n)
		//	입력에 따라 시간이 선형적으로 증가되는 시간 복잡도
		//	ex) 순차 탐색

#pragma endregion

#pragma region 제곱 시간 O(n²)
		// 입력되는 데이터를 기준으로 n²만큼 시간이	 증가되는 시간 복잡도
		// ex) 2 for statment

#pragma endregion



#pragma endregion

#pragma region 공간 복잡도
	// 프로그램 실행과 완료시 어느정도의 공간이 필요한지 나타내는 척도
#pragma region 고정 공간
		//	코드가 저장되는 공간, 알고리즘 실행을 위해 시스템이 필요하는 공간
		// ex) 배열
#pragma endregion

#pragma region 가변 공간
		// 문제 해결을 위해 알고리즘이 필요하는 공간
		// ex) 재귀함수
#pragma endregion



#pragma endregion

#pragma region 점근적 표기법
	// 상수 계수와 중요하지 않은 항목을 제거한 표기법
	// ex) f(n) = n²+n+100 일 때 최고차항 만 표시 f(n) = n²
#pragma endregion


	return 0;
}