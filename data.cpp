#include <iostream>
#include <ctime>

using namespace std;
#define M 10
#define N 7

int main()
{
	int A[M][N];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = i + j;
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

	int sum = 0; // для суммы элементов в строке
	time_t t;
	time(&t);
	int day = localtime(&t)->tm_mday; // день месяца

	for (int x = 0; x < N; x++)
	{
		sum += A[day % N][x];
	}
	cout << sum << endl;

	return 0;
}