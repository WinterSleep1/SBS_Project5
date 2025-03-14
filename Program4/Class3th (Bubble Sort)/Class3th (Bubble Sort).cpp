#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
#pragma region 거품정렬
	// 인접한 두 원소를 비교하여 정렬하는 알고리즘
	int list[SIZE] = { 13, 8, 97, 1, 36 };
	int a;

	for (int i = SIZE; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				a = list[j];
				list[j] = list[j + 1];
				list[j + 1] = a;
			}
		}
	}

	for (int i = 0; i < SIZE; i++) { cout << list[i] << " "; }

#pragma endregion


	return 0;
}