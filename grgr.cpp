#include <iostream>
#include <ctime>
using namespace std; 
int main() {
// Заполнить массив случайными числами от -10 до 10. подсчитать кол-во положительных чисел.  
	const int n = 10;
	int mas[n]; 
	//  заполнение случайными числами.
	srand(time(nullptr)); 
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 51 - 25; // % 51 дает числа в диапазоне от 0 до 50
		std::cout << mas[i] << ' '; 
	}
	std::cout << std::endl; 
	//считаем положительные 
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (mas[i] > 0) k++; 
		}
	std::cout << k << std::endl; 
//  Cam1. 
	const int n1 = 10; 
	int mas[n1]; 
	srand(time(nullptr)); 
	for (int i1 = 0; i1 < n1; i1++) {
		mas[i1] = rand() % 31 - 10; 
		std::cout << mas[i1] << ' '; 
	}
	std::cout << std::endl; 
	int sum = 0; 
	for (int i1 = 0; i1 < n1; i1++) {
		if (mas[i1] % 2 == 0) {
			sum = sum + mas[i1]; 
		}
	}
	std::cout << sum << std::endl;

//Cam2. 
	const int N = 50; 
	int mas[N]; 
	srand(time(nullptr)); 
	for (int i2 = 0; i2 < N; i2++) {
		mas[i2] = rand() % 101 - 50;
		std::cout << mas[i2] << ' '; 
	}
	std::cout << std::endl; 
	int K = 0; 
	for (int i2 = 0; i2 < N; i2++) {
		if (mas[i2] < 0) K++; 
	}
	std::cout << K << std::endl; 

// Cam3. 
	const int N1 = 20; 
	int mas[N1]; 
	srand(time(nullptr)); 
	for (int I = 0; I < N1; I++) {
		mas[I] = rand() % 41 - 20; 
		std::cout << mas[I] << ' '; 
	}
	std::cout << std::endl; 
	int n2 = 1; 
	for (int I = 0; I < N1; I++) {
		if (mas[I] % 5 != 0) {
			n2 = n2 * mas[I]; 
		}
	}
	std::cout << n2 << std::endl; 

// Cam4. 
	const int N2 = 15; 
	int mas[N2]; 
	srand(time(nullptr)); 
	for (int I1 = 0; I1 < N2; I1++) {
		mas[N2] = rand() % 21 - 5;
		std::cout << mas[I1] << ' '; 
	}
	std::cout << std::endl; 
	int s=0, k=0; 
	for (int I1 = 0; I1 < N2; I1++) {
		if (mas[I1] % 3 != 0 || mas[I1] % 5 != 0) {
			s = s + mas[I1];
			k = k + 1;

		}
	}
	double sred = (double)s / (double)k; 
}
