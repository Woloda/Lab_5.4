// Lab_5.4.cpp
// Дорожовець Володимир 
// Лабораторна робота № 5.4
// Обчислення сум та добутків за допомогою рекурсії.
// Варіант 0.6 

#include <iostream>
#include <cmath>

using namespace std;

double P0(const int N, const int F)
{
	double p = 1;
	for (int K = N; K <= F; K++)
		p *= ((K * 1.0 - N * 1.0) / (K * 1.0 + N * 1.0) + 1);
	return p;
}
double P1(const int N, const int F, const int K)
{
	if (K > F)
		return 1;
	else
		return ((K * 1.0 - N * 1.0) / (K * 1.0 + N * 1.0) + 1) * P1(N, F, K + 1);
}
double P2(const int N, const int F, const int K)
{
	if (K < N)
		return 1;
	else
		return ((K * 1.0 - N * 1.0) / (K * 1.0 + N * 1.0) + 1) * P2(N, F, K - 1);
}
double P3(const int N, const int F, const int K, double t)
{
	t = t * ((K * 1.0 - N * 1.0) / (K * 1.0 + N * 1.0) + 1);
	if (K >= F)
		return t;
	else
		return P3(N, F, K + 1, t);
}
double P4(const int N, const int F, const int K, double t)
{
	t = t * ((K * 1.0 - N * 1.0) / (K * 1.0 + N * 1.0) + 1);
	if (K <= N)
		return t;
	else
		return P4(N, F, K - 1, t);
}
int main()
{
	int N;
	int F = 19;

	cout << "N = "; cin >> N;

	cout << "(iter) S0 = " << P0(N, F) << endl;
	cout << "(rec up ++) S1 = " << P1(N, F, N) << endl;
	cout << "(rec up --) S2 = " << P2(N, F, F) << endl;
	cout << "(rec down ++) S3 = " << P3(N, F, N, 1) << endl;
	cout << "(rec down --) S4 = " << P4(N, F, F, 1) << endl;
	return 0;
}
