#include <iostream>

#define SIZE 5

using namespace std;

int main()
{
#pragma region 선택 정렬
	// 리스트 중에서 최소값을 찾아 특정한 위치에서 결과를 교체하는 알고리즘
	int list[SIZE] = { 6, 2, 8, 1, 0 };

	for (int i = 0; i < SIZE; i++)
	{
		int min = list[i];
		int index = i;

		for (int j = i + 1; j < SIZE; j++)
		{
			if (min > list[j])
			{
				min = list[j];
				index = j;
			}
		}

		swap(list[i], list[index]);
	}

	for (int i = 0; i < SIZE; i++) { cout << list[i] << " "; }
#pragma endregion


	return 0;
}