#include <iostream>
using namespace std;

int dataa[10000];
int main()
{
	int M, N, ch, i;
	int sum = 0;
	int mini = 10000;
	
	cin >> M >> N;
	for (i = 1; i <= N;i++)
	{
		dataa[i] = i * i;
	}
	if (M > N)
	{
		ch = M;
		M = N;
		N = ch;
	}
	for (i= 1;i<=N;i++){
		if (M <= dataa[i] && dataa[i] <= N) {
			sum += dataa[i];
			mini = min(mini, dataa[i]);
		}
	}
	if (sum == 0) {
		cout << "-1";
	}
	else {
		cout << sum << "\n";
		cout << mini << "\n";
	}
	return 0;
}