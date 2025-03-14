#include <iostream>

using namespace std;

int main()
{
#pragma region 완전 탐색 (브루트 포스)
	// 가능한 모든 경우의 수를 탐색하여 결과를 찾는 알고리즘

	int pw[] = { 7, 1, 2 };

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				if (pw[0] == i && pw[1] == j && pw[2] == k)
				{
					cout << "Password : " << i << " " << j << " " << k << endl;
					break;
				}
			}
		}
	}
#pragma endregion


	return 0;
}