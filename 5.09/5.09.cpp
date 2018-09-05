// 5.09.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

using namespace std;

//2 zadacha
int* form_array(int** p, int n, int m, int &new_size)
{
	new_size = n * m;
	int index = 0;
	int* tmp = new int[new_size];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tmp[index++] = p[i][j];} }
	return tmp;
}
//3 zadacha
void add_row(int** &p, int &n, int m) {
	int** t = new int*[n + 1];

	for (int i = 0; i < n; i++)
		t[i] = p[i];

	delete[] p;

	p = t;
	p[n] = new int[m];
	n++;
}
//4 zadacha
void add_n(int** &p, int &n, int m) {
	int** t = new int*[n+1];

	for (int i = 0; i < n; i++)
		t[i+1] = p[i];

	delete[] p;

	p = t;
	p[0] = new int[m];
	n++;
}

//5 zadacha
void add_row_k(int** &p, int &n, int m, int k) {
	int** t = new int*[n + 1];
	for (int i = 0; i < k; i++)
		t[i] = p[i];
	for (int i = k; i < n; i++)
		t[i + 1] = p[i];
	delete[] p;
	p = t;
	p[k] = new int[m];
	n++;
}

//6 zadacha
void delete_row(int**& p, int &n, int m, int k) {
	delete[] p[k];
	for (int i = k; i < n; i++)
		p[i] = p[i + 1];
	n--;
}






int main()
{
	//6 zadacha
	/*int** p;
	int n = 4, m = 5;
	int k;
	cin >> k;
	srand(time(NULL));
	p = new int*[n];
	for (int i = 0; i < n; i++)
		p[i] = new int[m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			p[i][j] = rand() % 20 + 1;
			cout << setw(5) << p[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	delete_row(p, n, m, k);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << p[i][j] << " ";
		}
		cout << endl;
	}
*/

	//5 zadacha
	/*int** p;
	int n = 4, m = 5;
	int k;
	cin >> k;

	srand(time(NULL));
	p = new int*[n];
	for (int i = 0; i < n; i++)
		p[i] = new int[m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			p[i][j] = rand() % 20 + 1;
		}
	}

	add_row_k(p, n, m, k);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << p[i][j] << " ";
		}
		cout << endl;
	}*/

	//4 zadacha
	/*int** p;
	int n = 4, m = 5;

	srand(time(NULL));
	p = new int*[n];
	for (int i = 0; i < n; i++)
		p[i] = new int[m];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			p[i][j] = rand() % 20 + 1;
		}
	}
	p[1][0] = 50;
	add_n(p, n, m);
	p[0][0] = 100;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << p[i][j] << " ";
		}
		cout << endl;
	}*/

	//3 zadacha
	/*int** p;
	int n=4, m=5;

	srand(time(NULL));
	p = new int*[n];
	for (int i = 0; i < n; i++)
		p[i] = new int[m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			p[i][j] = rand() % 20 + 1;
		}
	}

	p[0][0] = 100;
	add_row(p, n, m);
	p[3][0] = 200;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(5) << p[i][j] << " ";
		}
		cout << endl;
	}*/


	//2 zadacha
	/*int **p, *arr;
	int n, m, arr_size;
	cin >> n >> m;
	srand(time(NULL));
	p = new int *[n];
	for (int i = 0; i < n; i++)
		p[i] = new int[m];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			p[i][j] = rand() % 20 + 1;
			cout << setw(5) << p[i][j];
		}
		cout << endl;
	}
	arr = form_array(p, n, m, arr_size);
	for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
	cout << endl;

	delete[] arr;*/
	

	//1 zadacha
	/*int **p;
	int n, m;
	cin >> n >> m;

	p = new int *[n];
	for (int i = 0; i < n; i++)
		p[i] = new int[m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			p[i][j] = rand() % 20 + 1;
			cout << setw(5) << p[i][j];
		}
		cout << endl;
	}*/

	

	



    return 0;
}

