#include <iostream>
using namespace std;
int i = 1, dan = 1;
void sum_array(int ar[15][15]) {
	int dan =1, i=1;
	for (dan = 1; dan < 10; dan++)
	{
		for (i = 1; i < 10; i++)
		{

			ar[dan][i] = int(dan * i); // 합을 위한 배열
			ar[10][i] += ar[dan][i]; // 세로 합 출력 식
			ar[10][10] += ar[dan][i]; // 전체 합 출력 식
			
		}
	}
}
int main()
{
	int i = 1, dan = 1, s = 0;
	int ar[15][15] = { }; // 구구단 배열 생성
	//ar[dan][10] += ar[dan][i]; // 가로 합
	//ar[10][i] += ar[dan][i]; // 세로 합
	//ar[10][10] += ar[dan][i]; // 전체 합
	for (dan = 1; dan < 10; dan++)
	{
		for (i = 1; i < 10; i++)
		{

			cout << dan * i << "\t";

		}
		cout << endl;
	}




	return 0;
}